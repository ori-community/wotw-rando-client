#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebHeaderCollectionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebHeaderCollectionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollectionType__Enum_DEFINED)
#define IL2CPP_STRUCT_WebHeaderCollectionType__Enum_DEFINED
enum class WebHeaderCollectionType__Enum : uint16_t {
    Unknown = 0x0000,
    WebRequest = 0x0001,
    WebResponse = 0x0002,
    HttpWebRequest = 0x0003,
    HttpWebResponse = 0x0004,
    HttpListenerRequest = 0x0005,
    HttpListenerResponse = 0x0006,
    FtpWebRequest = 0x0007,
    FtpWebResponse = 0x0008,
    FileWebRequest = 0x0009,
    FileWebResponse = 0x000a,
};
#endif
#if !defined(IL2CPP_STRUCT_WebHeaderCollectionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_WebHeaderCollectionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WebHeaderCollectionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollectionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WebHeaderCollectionType__Enum_FWDDECL)
#include <Modloader/app/structs/WebHeaderCollectionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebHeaderCollectionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
