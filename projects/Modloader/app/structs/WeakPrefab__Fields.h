#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeakPrefab__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeakPrefab__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakPrefab__Fields_DEFINED)
#define IL2CPP_STRUCT_WeakPrefab__Fields_DEFINED
struct String;
struct __declspec(align(8)) WeakPrefab__Fields {
    struct String* Name;
    struct String* GUID;
    int32_t PrewarmAmount;
    int32_t KeepAliveAmount;
    float HighPriorityPrewarmRatio;
};
#endif
#if !defined(IL2CPP_STRUCT_WeakPrefab__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeakPrefab__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WeakPrefab__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakPrefab__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeakPrefab__Fields_FWDDECL)
#include <Modloader/app/structs/WeakPrefab__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeakPrefab__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
