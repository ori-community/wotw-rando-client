#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::Common::ObjectStorage_TempAssemblyComparer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjectStorage_TempAssemblyComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0216EDE0, bool, Equals, (app::ObjectStorage_TempAssemblyComparer * this_ptr, app::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ x, app::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ y))
    IL2CPP_REGISTER_METHOD(0x0216EFA0, int32_t, GetHashCode, (app::ObjectStorage_TempAssemblyComparer * this_ptr, app::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ obj))
    IL2CPP_REGISTER_METHOD(0x0216F080, void, cctor, ())
} // namespace app::classes::System::Data::Common::ObjectStorage_TempAssemblyComparer
