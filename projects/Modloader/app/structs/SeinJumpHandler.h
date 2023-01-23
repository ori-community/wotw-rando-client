#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinJumpHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinJumpHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJumpHandler_DEFINED)
#include <Modloader/app/structs/SeinJumpHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SeinJumpHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinJumpHandler_DEFINED
struct SeinJumpHandler__Class;
struct SeinJumpHandler {
    struct SeinJumpHandler__Class* klass;
    MonitorData* monitor;
    struct SeinJumpHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinJumpHandler_FWDDECL)
#define IL2CPP_STRUCT_SeinJumpHandler_FWDDECL
#include <Modloader/app/structs/SeinJumpHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinJumpHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJumpHandler_DEFINED) && !defined(IL2CPP_STRUCT_SeinJumpHandler_FWDDECL)
#include <Modloader/app/structs/SeinJumpHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinJumpHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
