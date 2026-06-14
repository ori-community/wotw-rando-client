#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClassMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClassMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassMap__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_ClassMap__Fields_DEFINED
struct Hashtable;
struct ArrayList;
struct XmlTypeMapMemberAttribute__Array;
struct XmlTypeMapMemberAnyElement;
struct XmlTypeMapMemberAnyAttribute;
struct XmlTypeMapMemberNamespaces;
struct XmlTypeMapMember;
struct __declspec(align(8)) ClassMap__Fields {
    struct Hashtable* _elements;
    struct ArrayList* _elementMembers;
    struct Hashtable* _attributeMembers;
    struct XmlTypeMapMemberAttribute__Array* _attributeMembersArray;
    struct ArrayList* _flatLists;
    struct ArrayList* _allMembers;
    struct ArrayList* _membersWithDefault;
    struct ArrayList* _listMembers;
    struct XmlTypeMapMemberAnyElement* _defaultAnyElement;
    struct XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute;
    struct XmlTypeMapMemberNamespaces* _namespaceDeclarations;
    struct XmlTypeMapMember* _xmlTextCollector;
    struct XmlTypeMapMember* _returnMember;
    bool _ignoreMemberNamespace;
    bool _canBeSimpleType;
    struct Nullable_1_Boolean_ _isOrderDependentMap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClassMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClassMap__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapMemberAnyAttribute.h>
#include <Modloader/app/structs/XmlTypeMapMemberAnyElement.h>
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Array.h>
#include <Modloader/app/structs/XmlTypeMapMemberNamespaces.h>
#endif
#undef IL2CPP_STRUCT_ClassMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClassMap__Fields_FWDDECL)
#include <Modloader/app/structs/ClassMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClassMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
