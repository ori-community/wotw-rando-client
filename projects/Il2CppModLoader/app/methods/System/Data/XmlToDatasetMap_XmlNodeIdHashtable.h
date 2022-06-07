#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::XmlToDatasetMap_XmlNodeIdHashtable {
    IL2CPP_REGISTER_METHOD(0x03055CD0, void, ctor, (app::XmlToDatasetMap_XmlNodeIdHashtable * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x03055E50, app::Object *, get_Item_1, (app::XmlToDatasetMap_XmlNodeIdHashtable * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x03055EF0, app::Object *, get_Item_2, (app::XmlToDatasetMap_XmlNodeIdHashtable * this_ptr, app::XmlReader * data_reader))
    IL2CPP_REGISTER_METHOD(0x03055F90, app::Object *, get_Item_3, (app::XmlToDatasetMap_XmlNodeIdHashtable * this_ptr, app::DataTable * table))
    IL2CPP_REGISTER_METHOD(0x03056020, app::Object *, get_Item_4, (app::XmlToDatasetMap_XmlNodeIdHashtable * this_ptr, app::String * name))
}
