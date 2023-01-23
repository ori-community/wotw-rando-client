#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorController_DEFINED)
#include <Modloader/app/structs/CursorController__Fields.h>
#if defined(IL2CPP_STRUCT_CursorController__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorController_DEFINED
struct CursorController__Class;
struct CursorController {
    struct CursorController__Class* klass;
    MonitorData* monitor;
    struct CursorController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorController_FWDDECL)
#define IL2CPP_STRUCT_CursorController_FWDDECL
#include <Modloader/app/structs/CursorController__Class.h>
#endif
#undef IL2CPP_STRUCT_CursorController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorController_DEFINED) && !defined(IL2CPP_STRUCT_CursorController_FWDDECL)
#include <Modloader/app/structs/CursorController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
