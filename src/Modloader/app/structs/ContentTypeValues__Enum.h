#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentTypeValues__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentTypeValues__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentTypeValues__Enum_DEFINED)
#define IL2CPP_STRUCT_ContentTypeValues__Enum_DEFINED
enum class ContentTypeValues__Enum : int32_t {
    ChangeCipherSpec = 0x00000014,
    Alert = 0x00000015,
    HandShake = 0x00000016,
    AppData = 0x00000017,
    Unrecognized = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_ContentTypeValues__Enum_FWDDECL)
#define IL2CPP_STRUCT_ContentTypeValues__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContentTypeValues__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentTypeValues__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ContentTypeValues__Enum_FWDDECL)
#include <Modloader/app/structs/ContentTypeValues__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentTypeValues__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
