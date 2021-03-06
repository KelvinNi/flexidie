/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "TMPopupController.h"

@class NSDictionary, NSManagedObjectContext, NSString, TMUserDataSource;

@interface TMAuthController //: TMPopupController
{
    id _didAuthenticateBlock;
    TMUserDataSource *_userDataSource;
    NSManagedObjectContext *_mainContext;
    NSDictionary *_userInfo;
    NSString *_authenticationEventName;
}

@property(retain, nonatomic) NSString *authenticationEventName; // @synthesize authenticationEventName=_authenticationEventName;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSManagedObjectContext *mainContext; // @synthesize mainContext=_mainContext;
@property(retain, nonatomic) TMUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(copy, nonatomic) id didAuthenticateBlock; // @synthesize didAuthenticateBlock=_didAuthenticateBlock;
//- (void).cxx_destruct;
- (void)contextDidSave:(id)arg1;
- (void)authenticate:(id)arg1 password:(id)arg2;
- (id)initWithForm:(id)arg1 userDataSource:(id)arg2 mainContext:(id)arg3;

@end

