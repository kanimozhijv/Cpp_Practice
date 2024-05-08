
//Share Image or Video from gallery using Application
#include<iostream>
using namespace std;
enum class ImageFormat
{
	jpeg,
	png,
	gif
};
enum class VideoFormat
{
	avi,
	mp3,
	mp4
};
class IMediaItems {
public:
	virtual void Data() = 0;
};

class Images :public IMediaItems {
	ImageFormat formate;
	string image;
public:
	Images(ImageFormat formatArg, string imageArg) :formate{ formatArg }, image{ imageArg } {}
	void Data() {
		cout << "image" <<image<< "selected" << endl;
	}
};

class Videos:public IMediaItems{
	VideoFormat formate;
	string image;
public:
	Videos(VideoFormat formatArg, string imageArg) :formate{ formatArg }, image{ imageArg } {}
	void Data() {}
	void format() {}
};

class IApplications {
public:
	virtual void open() = 0;
};

class WhatsApp :public IApplications {
	void open() {}
};
class Bluethooth : public IApplications {
	void open() {}
};
class MailBox :public IApplications {
	void open() {}
};

class Gallery {
	IApplications* app;
	IMediaItems* media;
	public:
		Gallery(IApplications* appArg, IMediaItems* mediaArg) :app{ appArg }, media{ mediaArg }{}
			void select() {
			cout << "media item selected" << endl;
			media->Data();
		}
		void share() {
			cout << "media item shared" << endl;
			app->open();
		}
};

int main()
{
	WhatsApp whatsApp;
	Images image{ ImageFormat ::png,"kani.png" };
	Gallery gallery{ &whatsApp,&image };
	gallery.select();
	gallery.share();
}
