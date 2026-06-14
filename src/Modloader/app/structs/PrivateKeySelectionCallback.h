#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrivateKeySelectionCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrivateKeySelectionCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrivateKeySelectionCallback_DEFINED)
#include <Modloader/app/structs/PrivateKeySelectionCallback__Fields.h>
#if defined(IL2CPP_STRUCT_PrivateKeySelectionCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_PrivateKeySelectionCallback_DEFINED
struct PrivateKeySelectionCallback__Class;
struct PrivateKeySelectionCallback {
    struct PrivateKeySelectionCallback__Class* klass;
    MonitorData* monitor;
    struct PrivateKeySelectionCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrivateKeySelectionCallback_FWDDECL)
#define IL2CPP_STRUCT_PrivateKeySelectionCallback_FWDDECL
#include <Modloader/app/structs/PrivateKeySelectionCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_PrivateKeySelectionCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrivateKeySelectionCallback_DEFINED) && !defined(IL2CPP_STRUCT_PrivateKeySelectionCallback_FWDDECL)
#include <Modloader/app/structs/PrivateKeySelectionCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrivateKeySelectionCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
