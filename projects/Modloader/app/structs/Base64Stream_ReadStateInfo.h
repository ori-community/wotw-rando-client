#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64Stream_ReadStateInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64Stream_ReadStateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream_ReadStateInfo_DEFINED)
#include <Modloader/app/structs/Base64Stream_ReadStateInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Base64Stream_ReadStateInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64Stream_ReadStateInfo_DEFINED
struct Base64Stream_ReadStateInfo__Class;
struct Base64Stream_ReadStateInfo {
    struct Base64Stream_ReadStateInfo__Class* klass;
    MonitorData* monitor;
    struct Base64Stream_ReadStateInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Base64Stream_ReadStateInfo_FWDDECL)
#define IL2CPP_STRUCT_Base64Stream_ReadStateInfo_FWDDECL
#include <Modloader/app/structs/Base64Stream_ReadStateInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Base64Stream_ReadStateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream_ReadStateInfo_DEFINED) && !defined(IL2CPP_STRUCT_Base64Stream_ReadStateInfo_FWDDECL)
#include <Modloader/app/structs/Base64Stream_ReadStateInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64Stream_ReadStateInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
