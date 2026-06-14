#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NclConstants_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NclConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclConstants_DEFINED)
#define IL2CPP_STRUCT_NclConstants_DEFINED
struct NclConstants__Class;
struct NclConstants {
    struct NclConstants__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NclConstants_FWDDECL)
#define IL2CPP_STRUCT_NclConstants_FWDDECL
#include <Modloader/app/structs/NclConstants__Class.h>
#endif
#undef IL2CPP_STRUCT_NclConstants_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclConstants_DEFINED) && !defined(IL2CPP_STRUCT_NclConstants_FWDDECL)
#include <Modloader/app/structs/NclConstants.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NclConstants.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
