#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdvancedPushPlatformMsg_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdvancedPushPlatformMsg_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg_DEFINED)
#include <Modloader/app/structs/AdvancedPushPlatformMsg__Fields.h>
#if defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_DEFINED)
#define IL2CPP_STRUCT_AdvancedPushPlatformMsg_DEFINED
struct AdvancedPushPlatformMsg__Class;
struct AdvancedPushPlatformMsg {
    struct AdvancedPushPlatformMsg__Class* klass;
    MonitorData* monitor;
    struct AdvancedPushPlatformMsg__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg_FWDDECL)
#define IL2CPP_STRUCT_AdvancedPushPlatformMsg_FWDDECL
#include <Modloader/app/structs/AdvancedPushPlatformMsg__Class.h>
#endif
#undef IL2CPP_STRUCT_AdvancedPushPlatformMsg_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg_DEFINED) && !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg_FWDDECL)
#include <Modloader/app/structs/AdvancedPushPlatformMsg.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdvancedPushPlatformMsg.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
