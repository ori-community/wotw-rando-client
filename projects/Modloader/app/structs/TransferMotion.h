#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransferMotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransferMotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransferMotion_DEFINED)
#include <Modloader/app/structs/TransferMotion__Fields.h>
#if defined(IL2CPP_STRUCT_TransferMotion__Fields_DEFINED)
#define IL2CPP_STRUCT_TransferMotion_DEFINED
struct TransferMotion__Class;
struct TransferMotion {
    struct TransferMotion__Class* klass;
    MonitorData* monitor;
    struct TransferMotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransferMotion_FWDDECL)
#define IL2CPP_STRUCT_TransferMotion_FWDDECL
#include <Modloader/app/structs/TransferMotion__Class.h>
#endif
#undef IL2CPP_STRUCT_TransferMotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransferMotion_DEFINED) && !defined(IL2CPP_STRUCT_TransferMotion_FWDDECL)
#include <Modloader/app/structs/TransferMotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransferMotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
