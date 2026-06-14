#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerInputModule_MouseState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerInputModule_MouseState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_MouseState_DEFINED)
#include <Modloader/app/structs/PointerInputModule_MouseState__Fields.h>
#if defined(IL2CPP_STRUCT_PointerInputModule_MouseState__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerInputModule_MouseState_DEFINED
struct PointerInputModule_MouseState__Class;
struct PointerInputModule_MouseState {
    struct PointerInputModule_MouseState__Class* klass;
    MonitorData* monitor;
    struct PointerInputModule_MouseState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerInputModule_MouseState_FWDDECL)
#define IL2CPP_STRUCT_PointerInputModule_MouseState_FWDDECL
#include <Modloader/app/structs/PointerInputModule_MouseState__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerInputModule_MouseState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_MouseState_DEFINED) && !defined(IL2CPP_STRUCT_PointerInputModule_MouseState_FWDDECL)
#include <Modloader/app/structs/PointerInputModule_MouseState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerInputModule_MouseState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
