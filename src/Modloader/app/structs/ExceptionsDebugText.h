#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionsDebugText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionsDebugText_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsDebugText_DEFINED)
#include <Modloader/app/structs/ExceptionsDebugText__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionsDebugText__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionsDebugText_DEFINED
struct ExceptionsDebugText__Class;
struct ExceptionsDebugText {
    struct ExceptionsDebugText__Class* klass;
    MonitorData* monitor;
    struct ExceptionsDebugText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionsDebugText_FWDDECL)
#define IL2CPP_STRUCT_ExceptionsDebugText_FWDDECL
#include <Modloader/app/structs/ExceptionsDebugText__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionsDebugText_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsDebugText_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionsDebugText_FWDDECL)
#include <Modloader/app/structs/ExceptionsDebugText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionsDebugText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
