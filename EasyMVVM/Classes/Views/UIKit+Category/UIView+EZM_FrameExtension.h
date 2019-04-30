/**
 * Beijing Sankuai Online Technology Co.,Ltd (Meituan)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

#import <UIKit/UIKit.h>

@class EZRMutableNode<T>;

@interface UIView (EZM_FrameExtension)


@property (nonatomic, readonly, strong) EZRMutableNode<NSNumber *> *x;
@property (nonatomic, readonly, strong) EZRMutableNode<NSNumber *> *y;
@property (nonatomic, readonly, strong) EZRMutableNode<NSNumber *> *width;
@property (nonatomic, readonly, strong) EZRMutableNode<NSNumber *> *height;

@end
