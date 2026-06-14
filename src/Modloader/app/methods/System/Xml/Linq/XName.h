#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XName.h>
#include <Modloader/app/structs/XNamespace.h>

namespace app::classes::System::Xml::Linq::XName {
    IL2CPP_REGISTER_METHOD(0x03038AD0, void, ctor_1, app::XName* this_ptr, app::XNamespace* ns, app::String* local_name)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_LocalName, app::XName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XNamespace*, get_Namespace, app::XName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::String*, get_NamespaceName, app::XName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03038BD0, app::String*, ToString, app::XName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03038CB0, app::XName*, Get_1, app::String* expanded_name)
    IL2CPP_REGISTER_METHOD(0x03038F20, app::XName*, Get_2, app::String* local_name, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x03038F60, app::XName*, op_Implicit, app::String* expanded_name)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, app::XName* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetHashCode, app::XName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, app::XName* left, app::XName* right)
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, app::XName* left, app::XName* right)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, IEquatable_XName__Equals, app::XName* this_ptr, app::XName* other)
    IL2CPP_REGISTER_METHOD(0x03038F70, void, ISerializable_GetObjectData, app::XName* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x03039090, void, ctor_2, app::XName* this_ptr)
    inline bool operator==(app::XName& left, app::XName& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::XName& left, app::XName& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::Xml::Linq::XName
