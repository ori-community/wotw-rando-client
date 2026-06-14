#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Led_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Led_INITIALIZING
#if !defined(IL2CPP_STRUCT_Led_DEFINED)
#include <Modloader/app/structs/Led__Fields.h>
#if defined(IL2CPP_STRUCT_Led__Fields_DEFINED)
#define IL2CPP_STRUCT_Led_DEFINED
struct Led__Class;
struct Led {
    struct Led__Class* klass;
    MonitorData* monitor;
    struct Led__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Led_FWDDECL)
#define IL2CPP_STRUCT_Led_FWDDECL
#include <Modloader/app/structs/Led__Class.h>
#endif
#undef IL2CPP_STRUCT_Led_INITIALIZING
#if !defined(IL2CPP_STRUCT_Led_DEFINED) && !defined(IL2CPP_STRUCT_Led_FWDDECL)
#include <Modloader/app/structs/Led.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Led.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
