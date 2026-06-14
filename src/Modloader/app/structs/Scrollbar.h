#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scrollbar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scrollbar_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scrollbar_DEFINED)
#include <Modloader/app/structs/Scrollbar__Fields.h>
#if defined(IL2CPP_STRUCT_Scrollbar__Fields_DEFINED)
#define IL2CPP_STRUCT_Scrollbar_DEFINED
struct Scrollbar__Class;
struct Scrollbar {
    struct Scrollbar__Class* klass;
    MonitorData* monitor;
    struct Scrollbar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Scrollbar_FWDDECL)
#define IL2CPP_STRUCT_Scrollbar_FWDDECL
#include <Modloader/app/structs/Scrollbar__Class.h>
#endif
#undef IL2CPP_STRUCT_Scrollbar_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scrollbar_DEFINED) && !defined(IL2CPP_STRUCT_Scrollbar_FWDDECL)
#include <Modloader/app/structs/Scrollbar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scrollbar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
