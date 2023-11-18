#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimeGeneratorBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimeGeneratorBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimeGeneratorBase_DEFINED)
#define IL2CPP_STRUCT_PrimeGeneratorBase_DEFINED
struct PrimeGeneratorBase__Class;
struct PrimeGeneratorBase {
    struct PrimeGeneratorBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PrimeGeneratorBase_FWDDECL)
#define IL2CPP_STRUCT_PrimeGeneratorBase_FWDDECL
#include <Modloader/app/structs/PrimeGeneratorBase__Class.h>
#endif
#undef IL2CPP_STRUCT_PrimeGeneratorBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimeGeneratorBase_DEFINED) && !defined(IL2CPP_STRUCT_PrimeGeneratorBase_FWDDECL)
#include <Modloader/app/structs/PrimeGeneratorBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimeGeneratorBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
