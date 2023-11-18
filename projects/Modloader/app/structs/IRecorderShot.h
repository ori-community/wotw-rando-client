#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRecorderShot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRecorderShot_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecorderShot_DEFINED)
#define IL2CPP_STRUCT_IRecorderShot_DEFINED
struct IRecorderShot__Class;
struct IRecorderShot {
    struct IRecorderShot__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRecorderShot_FWDDECL)
#define IL2CPP_STRUCT_IRecorderShot_FWDDECL
#include <Modloader/app/structs/IRecorderShot__Class.h>
#endif
#undef IL2CPP_STRUCT_IRecorderShot_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecorderShot_DEFINED) && !defined(IL2CPP_STRUCT_IRecorderShot_FWDDECL)
#include <Modloader/app/structs/IRecorderShot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRecorderShot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
