#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mirror_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mirror_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mirror_DEFINED)
#include <Modloader/app/structs/Mirror__Fields.h>
#if defined(IL2CPP_STRUCT_Mirror__Fields_DEFINED)
#define IL2CPP_STRUCT_Mirror_DEFINED
struct Mirror__Class;
struct Mirror {
    struct Mirror__Class* klass;
    MonitorData* monitor;
    struct Mirror__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mirror_FWDDECL)
#define IL2CPP_STRUCT_Mirror_FWDDECL
#include <Modloader/app/structs/Mirror__Class.h>
#endif
#undef IL2CPP_STRUCT_Mirror_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mirror_DEFINED) && !defined(IL2CPP_STRUCT_Mirror_FWDDECL)
#include <Modloader/app/structs/Mirror.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mirror.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
