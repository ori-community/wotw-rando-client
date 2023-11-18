#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64Stream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64Stream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream__Fields_DEFINED)
#include <Modloader/app/structs/DelegatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_DelegatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64Stream__Fields_DEFINED
struct Base64Stream_ReadStateInfo;
struct Base64WriteStateInfo;
struct Base64Stream__Fields {
    struct DelegatedStream__Fields _;
    int32_t lineLength;
    struct Base64Stream_ReadStateInfo* readState;
    struct Base64WriteStateInfo* writeState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Base64Stream__Fields_FWDDECL)
#define IL2CPP_STRUCT_Base64Stream__Fields_FWDDECL
#include <Modloader/app/structs/Base64Stream_ReadStateInfo.h>
#include <Modloader/app/structs/Base64WriteStateInfo.h>
#endif
#undef IL2CPP_STRUCT_Base64Stream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Base64Stream__Fields_FWDDECL)
#include <Modloader/app/structs/Base64Stream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64Stream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
