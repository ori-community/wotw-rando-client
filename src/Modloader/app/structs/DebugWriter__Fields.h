#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugWriter__Fields_DEFINED
struct String;
struct StreamWriter;
struct Int32__Array;
struct __declspec(align(8)) DebugWriter__Fields {
    int32_t iteration;
    struct String* session;
    struct StreamWriter* stream;
    struct String* tmpFile;
    struct Int32__Array* vertices;
    int32_t triangles;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugWriter__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugWriter__Fields_FWDDECL)
#include <Modloader/app/structs/DebugWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
