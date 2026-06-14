#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriBar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriBar_DEFINED)
#include <Modloader/app/structs/OriBar__Fields.h>
#if defined(IL2CPP_STRUCT_OriBar__Fields_DEFINED)
#define IL2CPP_STRUCT_OriBar_DEFINED
struct OriBar__Class;
struct OriBar {
    struct OriBar__Class* klass;
    MonitorData* monitor;
    struct OriBar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriBar_FWDDECL)
#define IL2CPP_STRUCT_OriBar_FWDDECL
#include <Modloader/app/structs/OriBar__Class.h>
#endif
#undef IL2CPP_STRUCT_OriBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriBar_DEFINED) && !defined(IL2CPP_STRUCT_OriBar_FWDDECL)
#include <Modloader/app/structs/OriBar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriBar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
