#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utility_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utility_DEFINED)
#define IL2CPP_STRUCT_Utility_DEFINED
struct Utility__Class;
struct Utility {
    struct Utility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Utility_FWDDECL)
#define IL2CPP_STRUCT_Utility_FWDDECL
#include <Modloader/app/structs/Utility__Class.h>
#endif
#undef IL2CPP_STRUCT_Utility_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utility_DEFINED) && !defined(IL2CPP_STRUCT_Utility_FWDDECL)
#include <Modloader/app/structs/Utility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
