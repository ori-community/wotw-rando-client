#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream__Fields_DEFINED)
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_FileAccess__Enum_DEFINED)
#define IL2CPP_STRUCT_FileStream__Fields_DEFINED
struct Byte__Array;
struct String;
struct SafeFileHandle;
struct FileStream__Fields {
    struct Stream__Fields _;
    struct Byte__Array* buf;
    struct String* name;
    struct SafeFileHandle* safeHandle;
    bool isExposed;
    int64_t append_startpos;
    FileAccess__Enum access;

    bool owner;
    bool async;
    bool canseek;
    bool anonymous;
    bool buf_dirty;
    int32_t buf_size;
    int32_t buf_length;
    int32_t buf_offset;
    int64_t buf_start;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SafeFileHandle.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FileStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileStream__Fields_FWDDECL)
#include <Modloader/app/structs/FileStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
