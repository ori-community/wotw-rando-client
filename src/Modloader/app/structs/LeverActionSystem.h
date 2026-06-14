#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverActionSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverActionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverActionSystem_DEFINED)
#include <Modloader/app/structs/LeverActionSystem__Fields.h>
#if defined(IL2CPP_STRUCT_LeverActionSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverActionSystem_DEFINED
struct LeverActionSystem__Class;
struct LeverActionSystem {
    struct LeverActionSystem__Class* klass;
    MonitorData* monitor;
    struct LeverActionSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverActionSystem_FWDDECL)
#define IL2CPP_STRUCT_LeverActionSystem_FWDDECL
#include <Modloader/app/structs/LeverActionSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_LeverActionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverActionSystem_DEFINED) && !defined(IL2CPP_STRUCT_LeverActionSystem_FWDDECL)
#include <Modloader/app/structs/LeverActionSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverActionSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
