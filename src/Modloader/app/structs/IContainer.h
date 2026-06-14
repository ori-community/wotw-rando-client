#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContainer_DEFINED)
#define IL2CPP_STRUCT_IContainer_DEFINED
struct IContainer__Class;
struct IContainer {
    struct IContainer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContainer_FWDDECL)
#define IL2CPP_STRUCT_IContainer_FWDDECL
#include <Modloader/app/structs/IContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_IContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContainer_DEFINED) && !defined(IL2CPP_STRUCT_IContainer_FWDDECL)
#include <Modloader/app/structs/IContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
