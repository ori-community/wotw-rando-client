#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoolDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoolDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolDebugMenuItem_DEFINED)
#include <Modloader/app/structs/BoolDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_BoolDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_BoolDebugMenuItem_DEFINED
struct BoolDebugMenuItem__Class;
struct BoolDebugMenuItem {
    struct BoolDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct BoolDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoolDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_BoolDebugMenuItem_FWDDECL
#include <Modloader/app/structs/BoolDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_BoolDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_BoolDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/BoolDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoolDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
