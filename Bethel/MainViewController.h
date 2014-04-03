//
//  MainViewController.h
//  Bethel
//
//  Created by Albert Martin on 11/17/13.
//  Copyright (c) 2013 Albert Martin. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, MKMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLLocationCoordinate2D currentCenter;
    int currentDist;
    BOOL firstLaunch;
}

@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UITableView *locationsTableView;
@property (nonatomic, retain) NSArray *locationResults;

@end