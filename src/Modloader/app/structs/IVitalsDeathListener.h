#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVitalsDeathListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVitalsDeathListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVitalsDeathListener_DEFINED)
#define IL2CPP_STRUCT_IVitalsDeathListener_DEFINED
struct IVitalsDeathListener__Class;
struct IVitalsDeathListener {
    struct IVitalsDeathListener__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IVitalsDeathListener_FWDDECL)
#define IL2CPP_STRUCT_IVitalsDeathListener_FWDDECL
#include <Modloader/app/structs/IVitalsDeathListener__Class.h>
#endif
#undef IL2CPP_STRUCT_IVitalsDeathListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVitalsDeathListener_DEFINED) && !defined(IL2CPP_STRUCT_IVitalsDeathListener_FWDDECL)
#include <Modloader/app/structs/IVitalsDeathListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVitalsDeathListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
