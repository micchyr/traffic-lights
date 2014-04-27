/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /DiskE/dokumenty/catkin_workspace/src/traffic_lights/msg/Light.msg
 *
 */


#ifndef TRAFFIC_LIGHTS_MESSAGE_LIGHT_H
#define TRAFFIC_LIGHTS_MESSAGE_LIGHT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace traffic_lights
{
template <class ContainerAllocator>
struct Light_
{
  typedef Light_<ContainerAllocator> Type;

  Light_()
    : color()  {
    }
  Light_(const ContainerAllocator& _alloc)
    : color(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _color_type;
  _color_type color;




  typedef boost::shared_ptr< ::traffic_lights::Light_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::traffic_lights::Light_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Light_

typedef ::traffic_lights::Light_<std::allocator<void> > Light;

typedef boost::shared_ptr< ::traffic_lights::Light > LightPtr;
typedef boost::shared_ptr< ::traffic_lights::Light const> LightConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::traffic_lights::Light_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::traffic_lights::Light_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace traffic_lights

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'traffic_lights': ['/DiskE/dokumenty/catkin_workspace/src/traffic_lights/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::traffic_lights::Light_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::traffic_lights::Light_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::traffic_lights::Light_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::traffic_lights::Light_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::traffic_lights::Light_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::traffic_lights::Light_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::traffic_lights::Light_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89e44dcab627a2c43a70ae1100695caa";
  }

  static const char* value(const ::traffic_lights::Light_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89e44dcab627a2c4ULL;
  static const uint64_t static_value2 = 0x3a70ae1100695caaULL;
};

template<class ContainerAllocator>
struct DataType< ::traffic_lights::Light_<ContainerAllocator> >
{
  static const char* value()
  {
    return "traffic_lights/Light";
  }

  static const char* value(const ::traffic_lights::Light_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::traffic_lights::Light_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string color\n\
";
  }

  static const char* value(const ::traffic_lights::Light_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::traffic_lights::Light_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Light_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::traffic_lights::Light_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::traffic_lights::Light_<ContainerAllocator>& v)
  {
    s << indent << "color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRAFFIC_LIGHTS_MESSAGE_LIGHT_H
