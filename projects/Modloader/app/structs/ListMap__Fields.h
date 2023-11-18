#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ListMap__Fields_DEFINED
struct XmlTypeMapElementInfoList;
struct String;
struct __declspec(align(8)) ListMap__Fields {
    struct XmlTypeMapElementInfoList* _itemInfo;
    struct String* _choiceMember;
};
#endif
#if !defined(IL2CPP_STRUCT_ListMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListMap__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlTypeMapElementInfoList.h>
#endif
#undef IL2CPP_STRUCT_ListMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListMap__Fields_FWDDECL)
#include <Modloader/app/structs/ListMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
