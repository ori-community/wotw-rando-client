#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ClassMap.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlTypeMapElementInfo.h>
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapMemberAnyAttribute.h>
#include <Modloader/app/structs/XmlTypeMapMemberAnyElement.h>
#include <Modloader/app/structs/XmlTypeMapMemberAttribute.h>
#include <Modloader/app/structs/XmlTypeMapMemberExpandable.h>
#include <Modloader/app/structs/XmlTypeMapMemberNamespaces.h>

namespace app::classes::System::Xml::Serialization::ClassMap {
    IL2CPP_REGISTER_METHOD(0x01C8AE50, void, AddMember, app::ClassMap* this_ptr, app::XmlTypeMapMember* member)
    IL2CPP_REGISTER_METHOD(0x01C8BCB0, void, RegisterFlatList, app::ClassMap* this_ptr, app::XmlTypeMapMemberExpandable* member)
    IL2CPP_REGISTER_METHOD(0x01C8BE60, app::XmlTypeMapMemberAttribute*, GetAttribute, app::ClassMap* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x01C8BF90,
        app::XmlTypeMapElementInfo*,
        GetElement_1,
        app::ClassMap* this_ptr,
        app::String* name,
        app::String* ns,
        int32_t minimal_order
    )
    IL2CPP_REGISTER_METHOD(0x01C8C2B0, app::XmlTypeMapElementInfo*, GetElement_2, app::ClassMap* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01C8C530, app::String*, BuildKey, app::ClassMap* this_ptr, app::String* name, app::String* ns, int32_t explicit_order)
    IL2CPP_REGISTER_METHOD(0x01C8C620, bool, get_IsOrderDependentMap, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlTypeMapMemberAnyElement*, get_DefaultAnyElementMember, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlTypeMapMemberAnyAttribute*, get_DefaultAnyAttributeMember, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlTypeMapMemberNamespaces*, get_NamespaceDeclarations, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C8C8D0, app::ICollection*, get_AttributeMembers, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ICollection*, get_ElementMembers, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::ArrayList*, get_AllMembers, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ArrayList*, get_FlatLists, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::ArrayList*, get_ListMembers, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlTypeMapMember*, get_XmlTextCollector, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlTypeMapMember*, get_ReturnMember, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C8CC00, app::XmlQualifiedName*, get_SimpleContentBaseType, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00674DC0, void, SetCanBeSimpleType, app::ClassMap* this_ptr, bool can)
    IL2CPP_REGISTER_METHOD(0x01C8CEC0, bool, get_HasSimpleContent, app::ClassMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C8CF70, void, ctor, app::ClassMap* this_ptr)
} // namespace app::classes::System::Xml::Serialization::ClassMap
