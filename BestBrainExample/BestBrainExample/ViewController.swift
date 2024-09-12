//
//  ViewController.swift
//  BestBrainExample
//
//  Created by Mithun Bera on 12/09/24.
//

import UIKit
import BestBrain

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        BestBrainConfig.setConfig(baseurl: "<https://YOUR-SERVER/api/v1/>", socketUrl: "<YOUR_SOCKET_SERVER>", apiKey: "<YOUR_API_KEY>", appId: "<YOUR_APP_ID>")
    }

    @IBAction func openChatboat(_ sender: Any) {
        let chatVC = BestBrainMessageViewController.getMsgVc()
        self.navigationController?.pushViewController(chatVC, animated: true)
    }
    
}

