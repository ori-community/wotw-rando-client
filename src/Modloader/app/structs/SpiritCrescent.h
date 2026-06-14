#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritCrescent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritCrescent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritCrescent_DEFINED)
#include <Modloader/app/structs/SpiritCrescent__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritCrescent__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritCrescent_DEFINED
struct SpiritCrescent__Class;
struct SpiritCrescent {
    struct SpiritCrescent__Class* klass;
    MonitorData* monitor;
    struct SpiritCrescent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritCrescent_FWDDECL)
#define IL2CPP_STRUCT_SpiritCrescent_FWDDECL
#include <Modloader/app/structs/SpiritCrescent__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritCrescent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritCrescent_DEFINED) && !defined(IL2CPP_STRUCT_SpiritCrescent_FWDDECL)
#include <Modloader/app/structs/SpiritCrescent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritCrescent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
