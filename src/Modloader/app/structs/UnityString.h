#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityString_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityString_DEFINED)
#define IL2CPP_STRUCT_UnityString_DEFINED
struct UnityString__Class;
struct UnityString {
    struct UnityString__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityString_FWDDECL)
#define IL2CPP_STRUCT_UnityString_FWDDECL
#include <Modloader/app/structs/UnityString__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityString_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityString_DEFINED) && !defined(IL2CPP_STRUCT_UnityString_FWDDECL)
#include <Modloader/app/structs/UnityString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
