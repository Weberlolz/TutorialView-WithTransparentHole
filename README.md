# TutorialView-WithTransparentHole

A UIView subclass for tutorial using. 

Having a background color, and transparent holes.

# How to use?

Just add the .h .m file into your project, then import the header to your viewcontroller.

Then allocate the view by: 
BaseTutorialView \*view = [[BaseTutorialView alloc] initWithFrame:(CGRect)frame backgroundColor:(UIColor \*)color andTransparentRects:(NSArray*)rects];
