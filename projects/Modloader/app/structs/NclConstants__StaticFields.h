#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NclConstants__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NclConstants__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclConstants__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NclConstants__StaticFields_DEFINED
struct Object;
struct Object__Array;
struct Uri__Array;
struct Byte__Array;
struct NclConstants__StaticFields {
    struct Object* Sentinel;
    struct Object__Array* EmptyObjectArray;
    struct Uri__Array* EmptyUriArray;
    struct Byte__Array* CRLF;
    struct Byte__Array* ChunkTerminator;
};
#endif
#if !defined(IL2CPP_STRUCT_NclConstants__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NclConstants__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Uri__Array.h>
#endif
#undef IL2CPP_STRUCT_NclConstants__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclConstants__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NclConstants__StaticFields_FWDDECL)
#include <Modloader/app/structs/NclConstants__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NclConstants__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
