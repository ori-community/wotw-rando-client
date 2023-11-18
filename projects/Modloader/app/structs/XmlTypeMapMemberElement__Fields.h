#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_DEFINED)
#include <Modloader/app/structs/XmlTypeMapMember__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_DEFINED
struct XmlTypeMapElementInfoList;
struct String;
struct TypeData;
struct XmlTypeMapMemberElement__Fields {
    struct XmlTypeMapMember__Fields _;
    struct XmlTypeMapElementInfoList* _elementInfo;
    struct String* _choiceMember;
    bool _isTextCollector;
    struct TypeData* _choiceTypeData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlTypeMapElementInfoList.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapMemberElement__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapMemberElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapMemberElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
