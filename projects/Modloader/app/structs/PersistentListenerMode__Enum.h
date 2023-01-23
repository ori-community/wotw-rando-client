#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistentListenerMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistentListenerMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentListenerMode__Enum_DEFINED)
#define IL2CPP_STRUCT_PersistentListenerMode__Enum_DEFINED
enum class PersistentListenerMode__Enum : int32_t {
    EventDefined = 0x00000000,
    Void = 0x00000001,
    Object = 0x00000002,
    Int = 0x00000003,
    Float = 0x00000004,
    String = 0x00000005,
    Bool = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_PersistentListenerMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_PersistentListenerMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PersistentListenerMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentListenerMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PersistentListenerMode__Enum_FWDDECL)
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
