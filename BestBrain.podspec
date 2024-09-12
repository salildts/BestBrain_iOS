Pod::Spec.new do |s|
  s.name         = "BestBrain"
  s.version      = "0.0.3"
  s.summary      = "BestBrain static framework for cognitive applications."
  s.description  = <<-DESC
                   BestBrain is a precompiled static framework for cognitive applications, designed to integrate seamlessly into your projects.
                   DESC
  s.homepage     = "https://github.com/salildts/BestBrain_iOS"
  s.license      = { :type => "Proprietary", :text => "All rights reserved @DreamztechSolution"}
  s.author       = { "Salil Dts" => "salil@example.com" }
  s.source       = { :git => "https://github.com/salildts/BestBrain_iOS.git", :tag => s.version.to_s }
  
  # Define the platform and version
  s.platform     = :ios, "13.0"

  # Specify that it is a static framework
  s.static_framework = true

  # Include precompiled framework
  s.vendored_frameworks = 'BestBrain.xcframework'

  # Include resource files (e.g., nibs, images, storyboards)
  # s.resources = 'BestBrain.xcframework/**/*.nib'

  # Alternatively, if bundling resources together
  # s.resource_bundles = {
  #   'Resources' => ['BestBrain.xcframework/Resources/**/*']
  #   # 'BestBrainResources' => ['BestBrain.xcframework/**/*.nib', 'BestBrain.xcframework/**/*.png', 'BestBrain.xcframework/**/*.storyboard', 'BestBrain.xcframework/**/*.ttf']
  # }

  # If you need to exclude code signing from resources
  s.exclude_files = 'BestBrain.xcframework/_CodeSignature'

end