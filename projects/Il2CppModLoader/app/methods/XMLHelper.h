#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XMLHelper {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XMLHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01542280, app::String*, ConvertToXML_1, (app::Object * object_to_convert))
    IL2CPP_REGISTER_METHOD(0x015E6D80, void, WriteToXMLFile_1, (app::Object * target, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x0157DDC0, app::Object*, LoadFromXMLString, (app::String * xml_text))
    IL2CPP_REGISTER_METHOD(0x01542280, app::String*, ConvertToXML_2, (app::List_1_TimesliceJobTracker_TimesliceJobSample_ * object_to_convert))
    IL2CPP_REGISTER_METHODINFO(0x0473E4F0, XMLHelper_ConvertToXML_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6D80, void, WriteToXMLFile_2, (app::List_1_TimesliceJobTracker_TimesliceJobSample_ * target, app::String* file_path))
    IL2CPP_REGISTER_METHODINFO(0x04719D58, XMLHelper_WriteToXMLFile_1__MethodInfo)
} // namespace app::classes::XMLHelper
