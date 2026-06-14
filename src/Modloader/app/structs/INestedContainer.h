#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INestedContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INestedContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_INestedContainer_DEFINED)
#define IL2CPP_STRUCT_INestedContainer_DEFINED
struct INestedContainer__Class;
struct INestedContainer {
    struct INestedContainer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INestedContainer_FWDDECL)
#define IL2CPP_STRUCT_INestedContainer_FWDDECL
#include <Modloader/app/structs/INestedContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_INestedContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_INestedContainer_DEFINED) && !defined(IL2CPP_STRUCT_INestedContainer_FWDDECL)
#include <Modloader/app/structs/INestedContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INestedContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
