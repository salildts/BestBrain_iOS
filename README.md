#Cocoapods Installation
1> Add below line in your pod file
pod 'BestBrain'
2> Run pod install

#Manual Installation
1> download the xcframework file & drag into your project
2> Go to porject settings > targets > General > FrameWorks, Libraries and Embedded Content > Add BestBrain.xcframework & mark as Embed & Sign

#Implementation
#Step 1
Please import BestBrain

#Step 2
Please setup configuration in viewDidLoad or Appdelegate didFinishLaunchingWithOptions method
 BestBrainConfig.setConfig(baseurl: "<https://YOUR-SERVER/api/v1/>", socketUrl: "<YOUR_SOCKET_SERVER>", apiKey: "<YOUR_API_KEY>", appId: "<YOUR_APP_ID>")

#Step 3
place bellow code where from you want to open chat boat

let vc = BestBrainMessageViewController.getMsgVc()
        vc.onBackButtonClicked = {
        //This part should handle to dismiss the chatboat
            self.navigationController?.popViewController(animated: true)
        }
        self.navigationController?.pushViewController(vc, animated: true)


If you still getting error ininstallation,Go to Project Settings > Target > Build Settings  Change *User Script Sandboxing to No*, Clean & build the project again.

