#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/NamespaceList_ListType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>

namespace app::classes::System::Xml::Schema::NamespaceList {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::NamespaceList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CD950, void, ctor_2, (app::NamespaceList * this_ptr, app::String* namespaces, app::String* target_namespace))
    IL2CPP_REGISTER_METHOD(0x016CDD60, app::NamespaceList*, Clone, (app::NamespaceList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::NamespaceList_ListType__Enum, get_Type, (app::NamespaceList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Excluded, (app::NamespaceList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CDF40, app::ICollection*, get_Enumerate, (app::NamespaceList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CE010, bool, Allows_1, (app::NamespaceList * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x016CE0B0, bool, Allows_2, (app::NamespaceList * this_ptr, app::XmlQualifiedName* qname))
    IL2CPP_REGISTER_METHOD(0x016CE0E0, app::String*, ToString, (app::NamespaceList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CE520, bool, IsSubset, (app::NamespaceList * sub, app::NamespaceList* super))
    IL2CPP_REGISTER_METHOD(0x016CE810, app::NamespaceList*, Union, (app::NamespaceList * o1, app::NamespaceList* o2, bool v1_compat))
    IL2CPP_REGISTER_METHOD(0x016CF0F0, app::NamespaceList*, CompareSetToOther, (app::NamespaceList * this_ptr, app::NamespaceList* other))
    IL2CPP_REGISTER_METHOD(0x016CF3E0, app::NamespaceList*, Intersection, (app::NamespaceList * o1, app::NamespaceList* o2, bool v1_compat))
    IL2CPP_REGISTER_METHOD(0x016CFA30, void, RemoveNamespace, (app::NamespaceList * this_ptr, app::String* tns))
} // namespace app::classes::System::Xml::Schema::NamespaceList
