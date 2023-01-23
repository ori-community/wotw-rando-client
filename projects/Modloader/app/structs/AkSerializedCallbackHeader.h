#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSerializedCallbackHeader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSerializedCallbackHeader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSerializedCallbackHeader_DEFINED)
#include <Modloader/app/structs/AkSerializedCallbackHeader__Fields.h>
#if defined(IL2CPP_STRUCT_AkSerializedCallbackHeader__Fields_DEFINED)
#define IL2CPP_STRUCT_AkSerializedCallbackHeader_DEFINED
struct AkSerializedCallbackHeader__Class;
struct AkSerializedCallbackHeader {
    struct AkSerializedCallbackHeader__Class* klass;
    MonitorData* monitor;
    struct AkSerializedCallbackHeader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkSerializedCallbackHeader_FWDDECL)
#define IL2CPP_STRUCT_AkSerializedCallbackHeader_FWDDECL
#include <Modloader/app/structs/AkSerializedCallbackHeader__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSerializedCallbackHeader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSerializedCallbackHeader_DEFINED) && !defined(IL2CPP_STRUCT_AkSerializedCallbackHeader_FWDDECL)
#include <Modloader/app/structs/AkSerializedCallbackHeader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSerializedCallbackHeader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
