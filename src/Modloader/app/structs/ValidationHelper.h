#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationHelper_DEFINED)
#define IL2CPP_STRUCT_ValidationHelper_DEFINED
struct ValidationHelper__Class;
struct ValidationHelper {
    struct ValidationHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ValidationHelper_FWDDECL)
#define IL2CPP_STRUCT_ValidationHelper_FWDDECL
#include <Modloader/app/structs/ValidationHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidationHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationHelper_DEFINED) && !defined(IL2CPP_STRUCT_ValidationHelper_FWDDECL)
#include <Modloader/app/structs/ValidationHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
