#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStream__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStream__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FileStream__StaticFields_DEFINED
struct Byte__Array;
struct Object;
struct FileStream__StaticFields {
    struct Byte__Array* buf_recycle;
    struct Object* buf_recycle_lock;
};
#endif
#if !defined(IL2CPP_STRUCT_FileStream__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FileStream__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_FileStream__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FileStream__StaticFields_FWDDECL)
#include <Modloader/app/structs/FileStream__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStream__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
