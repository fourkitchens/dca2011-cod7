/* Four Kitchens
 * ==|== author ==========================================================
 */

//This code is for flipping the boy and girl logo in and out
var imageURLs = [
  "/sites/all/themes/hipster/images/logo-boy.png",
  "/sites/all/themes/hipster/images/logo-girl.png"
];
function getImageTag() {
  var img = '<img src=\"';
  var randomIndex = Math.floor(Math.random() * imageURLs.length);
  img += imageURLs[randomIndex];
  img += '\" alt=\"Some alt text\"/>';
  return img;
}



