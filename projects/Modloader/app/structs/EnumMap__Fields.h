#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumMap__Fields_DEFINED
struct EnumMap_EnumMapMember__Array;
struct String__Array;
struct Int64__Array;
struct __declspec(align(8)) EnumMap__Fields {
    struct EnumMap_EnumMapMember__Array* _members;
    bool _isFlags;
    struct String__Array* _enumNames;
    struct String__Array* _xmlNames;
    struct Int64__Array* _values;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumMap__Fields_FWDDECL
#include <Modloader/app/structs/EnumMap_EnumMapMember__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_EnumMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumMap__Fields_FWDDECL)
#include <Modloader/app/structs/EnumMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
