#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MemberDescriptor.h>
#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/ISite.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::MemberDescriptor {
    IL2CPP_REGISTER_METHOD(0x01F0E5C0, void, ctor_1, (app::MemberDescriptor * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0298D530, void, ctor_2, (app::MemberDescriptor * this_ptr, app::String* name, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x0298D710, void, ctor_3, (app::MemberDescriptor * this_ptr, app::MemberDescriptor* descr))
    IL2CPP_REGISTER_METHOD(0x0298D930, void, ctor_4, (app::MemberDescriptor * this_ptr, app::MemberDescriptor* old_member_descriptor, app::Attribute__Array* new_attributes))
    IL2CPP_REGISTER_METHOD(0x0298DE90, app::Attribute__Array*, get_AttributeArray, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298DEC0, void, set_AttributeArray, (app::MemberDescriptor * this_ptr, app::Attribute__Array* value))
    IL2CPP_REGISTER_METHOD(0x0298DFB0, app::AttributeCollection*, get_Attributes, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E0D0, app::String*, get_Category, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E290, app::String*, get_Description, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E440, bool, get_IsBrowsable, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E560, app::String*, get_Name, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NameHashCode, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E5F0, bool, get_DesignTimeOnly, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E730, app::String*, get_DisplayName, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E8A0, void, CheckAttributesValid, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298E960, app::AttributeCollection*, CreateAttributeCollection, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298EAC0, bool, Equals, (app::MemberDescriptor * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0298EDD0, void, FillAttributes, (app::MemberDescriptor * this_ptr, app::IList* attribute_list))
    IL2CPP_REGISTER_METHOD(0x0298EF40, void, FilterAttributesIfNeeded, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298F630, app::MethodInfo_1*, FindMethod_1, (app::Type * component_class, app::String* name, app::Type__Array* args, app::Type* return_type))
    IL2CPP_REGISTER_METHOD(0x0298F6C0, app::MethodInfo_1*, FindMethod_2, (app::Type * component_class, app::String* name, app::Type__Array* args, app::Type* return_type, bool public_only))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetHashCode, (app::MemberDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298F790, app::Object*, GetInvocationTarget, (app::MemberDescriptor * this_ptr, app::Type* type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x0298F8D0, app::ISite*, GetSite, (app::Object * component))
    IL2CPP_REGISTER_METHOD(0x0298F9D0, app::Object*, GetInvokee, (app::Type * component_class, app::Object* component))
} // namespace app::classes::System::ComponentModel::MemberDescriptor
