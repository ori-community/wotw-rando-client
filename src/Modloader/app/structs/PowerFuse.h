#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PowerFuse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PowerFuse_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerFuse_DEFINED)
#include <Modloader/app/structs/PowerFuse__Fields.h>
#if defined(IL2CPP_STRUCT_PowerFuse__Fields_DEFINED)
#define IL2CPP_STRUCT_PowerFuse_DEFINED
struct PowerFuse__Class;
struct PowerFuse {
    struct PowerFuse__Class* klass;
    MonitorData* monitor;
    struct PowerFuse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PowerFuse_FWDDECL)
#define IL2CPP_STRUCT_PowerFuse_FWDDECL
#include <Modloader/app/structs/PowerFuse__Class.h>
#endif
#undef IL2CPP_STRUCT_PowerFuse_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerFuse_DEFINED) && !defined(IL2CPP_STRUCT_PowerFuse_FWDDECL)
#include <Modloader/app/structs/PowerFuse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PowerFuse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
