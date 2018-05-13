#
# Be sure to run `pod lib lint JDFGeometry.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "JDFGeometry"
  s.version          = "1.0.1"
  s.summary          = "A UIView Category and collection of functions for working with CGGeometry."
  s.description      = <<-DESC
                        JDFGeometry is a UIView Category and collection of functions for working with CGGeometry.
                       DESC
  s.homepage         = "https://github.com/JoeFryer/JDFGeometry"
  s.license          = 'MIT'
  s.author           = { "Joe Fryer" => "joe.d.fryer@gmail.com" }
  s.source           = { :git => "https://github.com/JoeFryer/JDFGeometry.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/JoeDFryer'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'
  s.resource_bundles = {
    'JDFGeometry' => ['Pod/Assets/*.png']
  }

  s.frameworks = 'UIKit'
end
