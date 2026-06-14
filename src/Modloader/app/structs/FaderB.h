#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderB_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderB_DEFINED)
#include <Modloader/app/structs/FaderB__Fields.h>
#if defined(IL2CPP_STRUCT_FaderB__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderB_DEFINED
struct FaderB__Class;
struct FaderB {
    struct FaderB__Class* klass;
    MonitorData* monitor;
    struct FaderB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderB_FWDDECL)
#define IL2CPP_STRUCT_FaderB_FWDDECL
#include <Modloader/app/structs/FaderB__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderB_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderB_DEFINED) && !defined(IL2CPP_STRUCT_FaderB_FWDDECL)
#include <Modloader/app/structs/FaderB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
