#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sdk__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sdk__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sdk__Fields_DEFINED)
#define IL2CPP_STRUCT_Sdk__Fields_DEFINED
struct String;
struct __declspec(align(8)) Sdk__Fields {
    struct String* _libVer_k__BackingField;
    struct String* _epoch_k__BackingField;
    int64_t _seq_k__BackingField;
    struct String* _installId_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Sdk__Fields_FWDDECL)
#define IL2CPP_STRUCT_Sdk__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Sdk__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sdk__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Sdk__Fields_FWDDECL)
#include <Modloader/app/structs/Sdk__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sdk__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
