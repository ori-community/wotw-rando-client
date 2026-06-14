#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEnergy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEnergy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnergy_DEFINED)
#include <Modloader/app/structs/SeinEnergy__Fields.h>
#if defined(IL2CPP_STRUCT_SeinEnergy__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEnergy_DEFINED
struct SeinEnergy__Class;
struct SeinEnergy {
    struct SeinEnergy__Class* klass;
    MonitorData* monitor;
    struct SeinEnergy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEnergy_FWDDECL)
#define IL2CPP_STRUCT_SeinEnergy_FWDDECL
#include <Modloader/app/structs/SeinEnergy__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinEnergy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnergy_DEFINED) && !defined(IL2CPP_STRUCT_SeinEnergy_FWDDECL)
#include <Modloader/app/structs/SeinEnergy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEnergy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
