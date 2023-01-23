#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMaterialPropertyBlockProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMaterialPropertyBlockProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMaterialPropertyBlockProvider_DEFINED)
#define IL2CPP_STRUCT_IMaterialPropertyBlockProvider_DEFINED
struct IMaterialPropertyBlockProvider__Class;
struct IMaterialPropertyBlockProvider {
    struct IMaterialPropertyBlockProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMaterialPropertyBlockProvider_FWDDECL)
#define IL2CPP_STRUCT_IMaterialPropertyBlockProvider_FWDDECL
#include <Modloader/app/structs/IMaterialPropertyBlockProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IMaterialPropertyBlockProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMaterialPropertyBlockProvider_DEFINED) && !defined(IL2CPP_STRUCT_IMaterialPropertyBlockProvider_FWDDECL)
#include <Modloader/app/structs/IMaterialPropertyBlockProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMaterialPropertyBlockProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
