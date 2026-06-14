#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ViaHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ViaHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ViaHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_ViaHeaderValue__Fields_DEFINED
struct String;
struct __declspec(align(8)) ViaHeaderValue__Fields {
    struct String* _Comment_k__BackingField;
    struct String* _ProtocolName_k__BackingField;
    struct String* _ProtocolVersion_k__BackingField;
    struct String* _ReceivedBy_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ViaHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_ViaHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ViaHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ViaHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ViaHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/ViaHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ViaHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
