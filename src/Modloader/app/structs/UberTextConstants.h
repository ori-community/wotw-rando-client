#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberTextConstants_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberTextConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTextConstants_DEFINED)
#define IL2CPP_STRUCT_UberTextConstants_DEFINED
struct UberTextConstants__Class;
struct UberTextConstants {
    struct UberTextConstants__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberTextConstants_FWDDECL)
#define IL2CPP_STRUCT_UberTextConstants_FWDDECL
#include <Modloader/app/structs/UberTextConstants__Class.h>
#endif
#undef IL2CPP_STRUCT_UberTextConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTextConstants_DEFINED) && !defined(IL2CPP_STRUCT_UberTextConstants_FWDDECL)
#include <Modloader/app/structs/UberTextConstants.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberTextConstants.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
