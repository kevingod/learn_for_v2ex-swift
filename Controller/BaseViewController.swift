//
//  BaseViewController.swift
//  V2ex-Swift
//
//  Created by huangfeng on 2/2/16.
//  Copyright © 2016 Fin. All rights reserved.
//

import UIKit

//有一个旋转加载视图

class BaseViewController: UIViewController {
    fileprivate weak var _loadView:V2LoadingView?
    
    func showLoadingView (){
        
        self.hideLoadingView()
        
        let aloadView = V2LoadingView()
        aloadView.backgroundColor = self.view.backgroundColor
        self.view.addSubview(aloadView)
        aloadView.snp.makeConstraints{ (make) -> Void in
            make.top.right.bottom.left.equalTo(self.view)
        }
        self._loadView = aloadView
    }
    
    func hideLoadingView() {
        self._loadView?.removeFromSuperview()
    }

}
