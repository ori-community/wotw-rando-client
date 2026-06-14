#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenameBasedOnText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenameBasedOnText_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenameBasedOnText_DEFINED)
#include <Modloader/app/structs/RenameBasedOnText__Fields.h>
#if defined(IL2CPP_STRUCT_RenameBasedOnText__Fields_DEFINED)
#define IL2CPP_STRUCT_RenameBasedOnText_DEFINED
struct RenameBasedOnText__Class;
struct RenameBasedOnText {
    struct RenameBasedOnText__Class* klass;
    MonitorData* monitor;
    struct RenameBasedOnText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenameBasedOnText_FWDDECL)
#define IL2CPP_STRUCT_RenameBasedOnText_FWDDECL
#include <Modloader/app/structs/RenameBasedOnText__Class.h>
#endif
#undef IL2CPP_STRUCT_RenameBasedOnText_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenameBasedOnText_DEFINED) && !defined(IL2CPP_STRUCT_RenameBasedOnText_FWDDECL)
#include <Modloader/app/structs/RenameBasedOnText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenameBasedOnText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
