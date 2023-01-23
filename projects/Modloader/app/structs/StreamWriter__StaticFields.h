#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamWriter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamWriter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_StreamWriter__StaticFields_DEFINED
struct StreamWriter;
struct Encoding;
struct StreamWriter__StaticFields {
    struct StreamWriter* Null;
    struct Encoding* _UTF8NoBOM;
};
#endif
#if !defined(IL2CPP_STRUCT_StreamWriter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StreamWriter__StaticFields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/StreamWriter.h>
#endif
#undef IL2CPP_STRUCT_StreamWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamWriter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StreamWriter__StaticFields_FWDDECL)
#include <Modloader/app/structs/StreamWriter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamWriter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
