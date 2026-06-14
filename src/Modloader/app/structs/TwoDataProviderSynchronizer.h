#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TwoDataProviderSynchronizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TwoDataProviderSynchronizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer_DEFINED)
#include <Modloader/app/structs/TwoDataProviderSynchronizer__Fields.h>
#if defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_DEFINED)
#define IL2CPP_STRUCT_TwoDataProviderSynchronizer_DEFINED
struct TwoDataProviderSynchronizer__Class;
struct TwoDataProviderSynchronizer {
    struct TwoDataProviderSynchronizer__Class* klass;
    MonitorData* monitor;
    struct TwoDataProviderSynchronizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer_FWDDECL)
#define IL2CPP_STRUCT_TwoDataProviderSynchronizer_FWDDECL
#include <Modloader/app/structs/TwoDataProviderSynchronizer__Class.h>
#endif
#undef IL2CPP_STRUCT_TwoDataProviderSynchronizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer_DEFINED) && !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer_FWDDECL)
#include <Modloader/app/structs/TwoDataProviderSynchronizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TwoDataProviderSynchronizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
