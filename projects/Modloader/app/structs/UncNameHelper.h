#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UncNameHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UncNameHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UncNameHelper_DEFINED)
#define IL2CPP_STRUCT_UncNameHelper_DEFINED
struct UncNameHelper__Class;
struct UncNameHelper {
    struct UncNameHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UncNameHelper_FWDDECL)
#define IL2CPP_STRUCT_UncNameHelper_FWDDECL
#include <Modloader/app/structs/UncNameHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_UncNameHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UncNameHelper_DEFINED) && !defined(IL2CPP_STRUCT_UncNameHelper_FWDDECL)
#include <Modloader/app/structs/UncNameHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UncNameHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
