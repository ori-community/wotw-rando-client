#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerInputModule_ButtonState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerInputModule_ButtonState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState_DEFINED)
#include <Modloader/app/structs/PointerInputModule_ButtonState__Fields.h>
#if defined(IL2CPP_STRUCT_PointerInputModule_ButtonState__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerInputModule_ButtonState_DEFINED
struct PointerInputModule_ButtonState__Class;
struct PointerInputModule_ButtonState {
    struct PointerInputModule_ButtonState__Class* klass;
    MonitorData* monitor;
    struct PointerInputModule_ButtonState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState_FWDDECL)
#define IL2CPP_STRUCT_PointerInputModule_ButtonState_FWDDECL
#include <Modloader/app/structs/PointerInputModule_ButtonState__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerInputModule_ButtonState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState_DEFINED) && !defined(IL2CPP_STRUCT_PointerInputModule_ButtonState_FWDDECL)
#include <Modloader/app/structs/PointerInputModule_ButtonState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerInputModule_ButtonState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
