#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpBehaviour__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpBehaviour__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpBehaviour__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpBehaviour__Enum_DEFINED
enum class HttpBehaviour__Enum : uint8_t {
    Unknown = 0x00,
    HTTP10 = 0x01,
    HTTP11PartiallyCompliant = 0x02,
    HTTP11 = 0x03,
};
#endif
#if !defined(IL2CPP_STRUCT_HttpBehaviour__Enum_FWDDECL)
#define IL2CPP_STRUCT_HttpBehaviour__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HttpBehaviour__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpBehaviour__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HttpBehaviour__Enum_FWDDECL)
#include <Modloader/app/structs/HttpBehaviour__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpBehaviour__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
