#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSTestFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSTestFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestFields_DEFINED)
#define IL2CPP_STRUCT_FPSTestFields_DEFINED
struct FPSTestFields__Class;
struct FPSTestFields {
    struct FPSTestFields__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FPSTestFields_FWDDECL)
#define IL2CPP_STRUCT_FPSTestFields_FWDDECL
#include <Modloader/app/structs/FPSTestFields__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSTestFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestFields_DEFINED) && !defined(IL2CPP_STRUCT_FPSTestFields_FWDDECL)
#include <Modloader/app/structs/FPSTestFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSTestFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
