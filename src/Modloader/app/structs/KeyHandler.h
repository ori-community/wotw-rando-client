#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyHandler_DEFINED)
#include <Modloader/app/structs/KeyHandler__Fields.h>
#if defined(IL2CPP_STRUCT_KeyHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyHandler_DEFINED
struct KeyHandler__Class;
struct KeyHandler {
    struct KeyHandler__Class* klass;
    MonitorData* monitor;
    struct KeyHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyHandler_FWDDECL)
#define IL2CPP_STRUCT_KeyHandler_FWDDECL
#include <Modloader/app/structs/KeyHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyHandler_DEFINED) && !defined(IL2CPP_STRUCT_KeyHandler_FWDDECL)
#include <Modloader/app/structs/KeyHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
