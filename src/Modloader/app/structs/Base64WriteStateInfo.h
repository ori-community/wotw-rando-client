#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64WriteStateInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64WriteStateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64WriteStateInfo_DEFINED)
#include <Modloader/app/structs/Base64WriteStateInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Base64WriteStateInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64WriteStateInfo_DEFINED
struct Base64WriteStateInfo__Class;
struct Base64WriteStateInfo {
    struct Base64WriteStateInfo__Class* klass;
    MonitorData* monitor;
    struct Base64WriteStateInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Base64WriteStateInfo_FWDDECL)
#define IL2CPP_STRUCT_Base64WriteStateInfo_FWDDECL
#include <Modloader/app/structs/Base64WriteStateInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Base64WriteStateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64WriteStateInfo_DEFINED) && !defined(IL2CPP_STRUCT_Base64WriteStateInfo_FWDDECL)
#include <Modloader/app/structs/Base64WriteStateInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64WriteStateInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
