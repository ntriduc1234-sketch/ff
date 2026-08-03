export TARGET = iphone:clang:latest:7.0
export ARCHS = arm64

include $(THEOS)/makefiles/common.mk

APPLICATION_NAME = headlocj
headlocj_FILES = main.m AppDelegate.m ViewController.m
headlocj_FRAMEWORKS = UIKit Foundation CoreGraphics
headlocj_CFLAGS = -fobjc-arc

include $(THEOS)/makefiles/application.mk
