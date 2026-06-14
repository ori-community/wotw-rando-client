#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageEnum__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_MessageEnum__Enum_DEFINED
enum class MessageEnum__Enum : int32_t {
    NoArgs = 0x00000001,
    ArgsInline = 0x00000002,
    ArgsIsArray = 0x00000004,
    ArgsInArray = 0x00000008,
    NoContext = 0x00000010,
    ContextInline = 0x00000020,
    ContextInArray = 0x00000040,
    MethodSignatureInArray = 0x00000080,
    PropertyInArray = 0x00000100,
    NoReturnValue = 0x00000200,
    ReturnValueVoid = 0x00000400,
    ReturnValueInline = 0x00000800,
    ReturnValueInArray = 0x00001000,
    ExceptionInArray = 0x00002000,
    GenericMethod = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_MessageEnum__Enum_FWDDECL)
#define IL2CPP_STRUCT_MessageEnum__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MessageEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageEnum__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MessageEnum__Enum_FWDDECL)
#include <Modloader/app/structs/MessageEnum__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageEnum__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
