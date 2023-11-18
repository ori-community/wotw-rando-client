#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyHelper_DEFINED)
#define IL2CPP_STRUCT_KeyHelper_DEFINED
struct KeyHelper__Class;
struct KeyHelper {
    struct KeyHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyHelper_FWDDECL)
#define IL2CPP_STRUCT_KeyHelper_FWDDECL
#include <Modloader/app/structs/KeyHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyHelper_DEFINED) && !defined(IL2CPP_STRUCT_KeyHelper_FWDDECL)
#include <Modloader/app/structs/KeyHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
