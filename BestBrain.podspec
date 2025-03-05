Pod::Spec.new do |s|
  s.name         = "BestBrain"
  s.version      = "0.0.4"
  s.summary      = "BestBrain static framework for cognitive applications."
  s.description  = "AI based chatboat. Setup server url, Socket url, AppId, ApiKey"
  s.homepage     = "https://github.com/salildts/BestBrain_iOS"
  s.license      = { :type => "Proprietary", :text => "All rights reserved @DreamztechSolution"}
  s.author       = { "Salil Ghosh" => "salil.ghosh@dreamztech.com" }
  s.source       = { :git => "https://github.com/salildts/BestBrain_iOS.git", :tag => s.version.to_s }
  
  # Define the platform and version
  s.platform     = :ios, "13.0"

  # Specify if it's a static framework
  s.static_framework = true

  # Specify the precompiled static framework
  s.vendored_frameworks = 'BestBrain.xcframework'

  # Include resource files (e.g., nibs, images, storyboards)
  s.resources = 'BestBrain.framework/**/*.nib'

  # Alternatively, if bundling resources together
  s.resource_bundles = {
    'BestBrainResources' => ['BestBrain.framework/**/*.nib', 'BestBrain.framework/**/*.png', 'BestBrain.framework/**/*.storyboard', 'BestBrain.framework/**/*.ttf']
  }

  # If you need to exclude code signing from resources
  s.exclude_files = 'BestBrain.framework/_CodeSignature'

end