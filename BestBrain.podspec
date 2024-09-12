Pod::Spec.new do |s|
  s.name         = "BestBrain"
  s.version      = "0.0.2"
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

  # If there are dependencies, list them here (e.g., external libraries your framework relies on)
  # s.dependency 'SomeOtherLibrary', '~> 1.2'

  # Example project (optional but recommended)
  # s.testspec 'BestBrainExample' do |test|
  #   test.source_files = "Example/Sources/**/*"
  #   test.resources = "Example/Resources/**/*"
  # end

end