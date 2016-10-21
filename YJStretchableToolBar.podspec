Pod::Spec.new do |s|
  s.name         = 'YJStretchableToolBar'
  s.version      = '0.0.1'
  s.summary      = 'An easy and stretchable tool bar.'
  s.homepage     = 'https://github.com/SplashZ/YJStretchableToolBar'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author             = { "zhengyongjing" => "zhengyongjing@tudou.com" }
  s.authors            = { "splashz" => "splashz@163.com" }
  s.social_media_url   = "https://github.com/SplashZ"
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = '7.0'
  s.source       = { :git => 'https://github.com/SplashZ/YJStretchableToolBar.git', :tag => s.version.to_s }
  s.requires_arc = true
end
