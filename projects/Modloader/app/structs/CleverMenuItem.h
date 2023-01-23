#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItem_DEFINED)
#include <Modloader/app/structs/CleverMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItem_DEFINED
struct CleverMenuItem__Class;
struct CleverMenuItem {
    struct CleverMenuItem__Class* klass;
    MonitorData* monitor;
    struct CleverMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItem_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItem_FWDDECL
#include <Modloader/app/structs/CleverMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItem_FWDDECL)
#include <Modloader/app/structs/CleverMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
