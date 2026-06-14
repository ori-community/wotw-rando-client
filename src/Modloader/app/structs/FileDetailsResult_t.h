#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileDetailsResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileDetailsResult_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_FileDetailsResult_t_DEFINED
struct Byte__Array;
struct FileDetailsResult_t {
    EResult__Enum m_eResult;

    uint64_t m_ulFileSize;
    struct Byte__Array* m_FileSHA;
    uint32_t m_unFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileDetailsResult_t_FWDDECL)
#define IL2CPP_STRUCT_FileDetailsResult_t_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_FileDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileDetailsResult_t_DEFINED) && !defined(IL2CPP_STRUCT_FileDetailsResult_t_FWDDECL)
#include <Modloader/app/structs/FileDetailsResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileDetailsResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
