#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_ContentType__Enum_DEFINED
enum class ContentType__Enum : uint8_t {
    ChangeCipherSpec = 0x14,
    Alert = 0x15,
    Handshake = 0x16,
    ApplicationData = 0x17,
};
#endif
#if !defined(IL2CPP_STRUCT_ContentType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ContentType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContentType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ContentType__Enum_FWDDECL)
#include <Modloader/app/structs/ContentType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
