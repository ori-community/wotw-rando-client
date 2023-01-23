#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IClipper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IClipper_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClipper_DEFINED)
#define IL2CPP_STRUCT_IClipper_DEFINED
struct IClipper__Class;
struct IClipper {
    struct IClipper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IClipper_FWDDECL)
#define IL2CPP_STRUCT_IClipper_FWDDECL
#include <Modloader/app/structs/IClipper__Class.h>
#endif
#undef IL2CPP_STRUCT_IClipper_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClipper_DEFINED) && !defined(IL2CPP_STRUCT_IClipper_FWDDECL)
#include <Modloader/app/structs/IClipper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IClipper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
