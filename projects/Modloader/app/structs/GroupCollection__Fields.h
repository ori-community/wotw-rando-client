#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupCollection__Fields_DEFINED
struct Match;
struct Hashtable;
struct Group__Array;
struct __declspec(align(8)) GroupCollection__Fields {
    struct Match* _match;
    struct Hashtable* _captureMap;
    struct Group__Array* _groups;
};
#endif
#if !defined(IL2CPP_STRUCT_GroupCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroupCollection__Fields_FWDDECL
#include <Modloader/app/structs/Group__Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Match.h>
#endif
#undef IL2CPP_STRUCT_GroupCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroupCollection__Fields_FWDDECL)
#include <Modloader/app/structs/GroupCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
