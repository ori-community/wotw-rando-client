#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordableType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordableType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableType__Enum_DEFINED)
#define IL2CPP_STRUCT_RecordableType__Enum_DEFINED
enum class RecordableType__Enum : uint8_t {
    Instantiated = 0x00,
    ChildOfInstantiated = 0x01,
    SceneRecordable = 0x02,
    PuppetRecordable = 0x03,
    Undefined = 0x04,
};
#endif
#if !defined(IL2CPP_STRUCT_RecordableType__Enum_FWDDECL)
#define IL2CPP_STRUCT_RecordableType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RecordableType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RecordableType__Enum_FWDDECL)
#include <Modloader/app/structs/RecordableType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordableType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
