#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_UndoState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_UndoState_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_UndoState_DEFINED)
#include <Modloader/app/structs/P3D_UndoState__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_UndoState__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_UndoState_DEFINED
struct P3D_UndoState__Class;
struct P3D_UndoState {
    struct P3D_UndoState__Class* klass;
    MonitorData* monitor;
    struct P3D_UndoState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_UndoState_FWDDECL)
#define IL2CPP_STRUCT_P3D_UndoState_FWDDECL
#include <Modloader/app/structs/P3D_UndoState__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_UndoState_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_UndoState_DEFINED) && !defined(IL2CPP_STRUCT_P3D_UndoState_FWDDECL)
#include <Modloader/app/structs/P3D_UndoState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_UndoState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
