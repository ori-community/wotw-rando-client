#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlToDatasetMap_XmlNodeIdentety.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::XmlToDatasetMap_XmlNodeIdentety {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::XmlToDatasetMap_XmlNodeIdentety * this_ptr, app::String* local_name, app::String* namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::XmlToDatasetMap_XmlNodeIdentety * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030560F0, bool, Equals, (app::XmlToDatasetMap_XmlNodeIdentety * this_ptr, app::Object* obj))
} // namespace app::classes::System::Data::XmlToDatasetMap_XmlNodeIdentety
