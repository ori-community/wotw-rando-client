#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectMapInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectMapInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMapInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectMapInfo__Fields_DEFINED
struct String__Array;
struct Type__Array;
struct __declspec(align(8)) ObjectMapInfo__Fields {
    int32_t objectId;
    int32_t numMembers;
    struct String__Array* memberNames;
    struct Type__Array* memberTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectMapInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectMapInfo__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectMapInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMapInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectMapInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectMapInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectMapInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
