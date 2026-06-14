#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Convert_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Convert_INITIALIZING
#if !defined(IL2CPP_STRUCT_Convert_DEFINED)
#define IL2CPP_STRUCT_Convert_DEFINED
struct Convert__Class;
struct Convert {
    struct Convert__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Convert_FWDDECL)
#define IL2CPP_STRUCT_Convert_FWDDECL
#include <Modloader/app/structs/Convert__Class.h>
#endif
#undef IL2CPP_STRUCT_Convert_INITIALIZING
#if !defined(IL2CPP_STRUCT_Convert_DEFINED) && !defined(IL2CPP_STRUCT_Convert_FWDDECL)
#include <Modloader/app/structs/Convert.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Convert.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
