/* Autogenerated with Kurento Idl */

#ifndef __POINTER_DETECTOR_WINDOW_MEDIA_PARAM_HPP__
#define __POINTER_DETECTOR_WINDOW_MEDIA_PARAM_HPP__

#include <jsoncpp/json/json.h>
#include <JsonRpcException.hpp>
#include <memory>

class JsonSerializer;

namespace kurento {
class PointerDetectorWindowMediaParam;
} /*kurento */

void Serialize(std::shared_ptr<kurento::PointerDetectorWindowMediaParam>& object, JsonSerializer& s);

namespace kurento {

class PointerDetectorWindowMediaParam
{

public:

  PointerDetectorWindowMediaParam (const std::string& id, int height, int width, int upperRightX, int upperRightY){
    this->id = id;
    this->height = height;
    this->width = width;
    this->upperRightX = upperRightX;
    this->upperRightY = upperRightY;
  };

  PointerDetectorWindowMediaParam (const Json::Value &value);

  void setId (std::string id) {
    this->id = id;
  };

  const std::string& getId () {
    return id;
  };

  void setHeight (int height) {
    this->height = height;
  };

  int getHeight () {
    return height;
  };

  void setWidth (int width) {
    this->width = width;
  };

  int getWidth () {
    return width;
  };

  void setUpperRightX (int upperRightX) {
    this->upperRightX = upperRightX;
  };

  int getUpperRightX () {
    return upperRightX;
  };

  void setUpperRightY (int upperRightY) {
    this->upperRightY = upperRightY;
  };

  int getUpperRightY () {
    return upperRightY;
  };

  void setActiveImage (std::string activeImage) {
    this->activeImage = activeImage;
    _isSetActiveImage = true;
  };

  const std::string& getActiveImage () {
    return activeImage;
  };

  bool isSetActiveImage () {
    return _isSetActiveImage;
  };

  void setImageTransparency (float imageTransparency) {
    this->imageTransparency = imageTransparency;
    _isSetImageTransparency = true;
  };

  float getImageTransparency () {
    return imageTransparency;
  };

  bool isSetImageTransparency () {
    return _isSetImageTransparency;
  };

  void setImage (std::string image) {
    this->image = image;
    _isSetImage = true;
  };

  const std::string& getImage () {
    return image;
  };

  bool isSetImage () {
    return _isSetImage;
  };

private:
  std::string id;
  int height;
  int width;
  int upperRightX;
  int upperRightY;
  std::string activeImage;
  bool _isSetActiveImage = false;
  float imageTransparency;
  bool _isSetImageTransparency = false;
  std::string image;
  bool _isSetImage = false;

  PointerDetectorWindowMediaParam() {};

  friend void ::Serialize(std::shared_ptr<PointerDetectorWindowMediaParam>& object, JsonSerializer& s);
};

} /* kurento */

#endif /*  __POINTER_DETECTOR_WINDOW_MEDIA_PARAM_HPP__ */
