#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HR_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HR_INITIALIZING
#if !defined(IL2CPP_STRUCT_HR_DEFINED)
#define IL2CPP_STRUCT_HR_DEFINED
struct HR__Class;
struct HR {
    struct HR__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HR_FWDDECL)
#define IL2CPP_STRUCT_HR_FWDDECL
#include <Modloader/app/structs/HR__Class.h>
#endif
#undef IL2CPP_STRUCT_HR_INITIALIZING
#if !defined(IL2CPP_STRUCT_HR_DEFINED) && !defined(IL2CPP_STRUCT_HR_FWDDECL)
#include <Modloader/app/structs/HR.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HR.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
