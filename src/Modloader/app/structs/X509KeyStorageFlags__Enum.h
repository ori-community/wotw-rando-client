#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509KeyStorageFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509KeyStorageFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyStorageFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X509KeyStorageFlags__Enum_DEFINED
enum class X509KeyStorageFlags__Enum : int32_t {
    DefaultKeySet = 0x00000000,
    UserKeySet = 0x00000001,
    MachineKeySet = 0x00000002,
    Exportable = 0x00000004,
    UserProtected = 0x00000008,
    PersistKeySet = 0x00000010,
    EphemeralKeySet = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_X509KeyStorageFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_X509KeyStorageFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509KeyStorageFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyStorageFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X509KeyStorageFlags__Enum_FWDDECL)
#include <Modloader/app/structs/X509KeyStorageFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509KeyStorageFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
