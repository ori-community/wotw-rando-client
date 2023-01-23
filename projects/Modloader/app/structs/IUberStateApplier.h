#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberStateApplier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberStateApplier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateApplier_DEFINED)
#define IL2CPP_STRUCT_IUberStateApplier_DEFINED
struct IUberStateApplier__Class;
struct IUberStateApplier {
    struct IUberStateApplier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberStateApplier_FWDDECL)
#define IL2CPP_STRUCT_IUberStateApplier_FWDDECL
#include <Modloader/app/structs/IUberStateApplier__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberStateApplier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateApplier_DEFINED) && !defined(IL2CPP_STRUCT_IUberStateApplier_FWDDECL)
#include <Modloader/app/structs/IUberStateApplier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberStateApplier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
