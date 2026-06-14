#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_DEFINED
struct String;
struct __declspec(align(8)) EnumMap_EnumMapMember__Fields {
    struct String* _xmlName;
    struct String* _enumName;
    int64_t _value;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_FWDDECL)
#include <Modloader/app/structs/EnumMap_EnumMapMember__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumMap_EnumMapMember__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
