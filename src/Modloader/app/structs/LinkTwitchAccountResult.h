#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkTwitchAccountResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkTwitchAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkTwitchAccountResult_DEFINED)
#include <Modloader/app/structs/LinkTwitchAccountResult__Fields.h>
#if defined(IL2CPP_STRUCT_LinkTwitchAccountResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkTwitchAccountResult_DEFINED
struct LinkTwitchAccountResult__Class;
struct LinkTwitchAccountResult {
    struct LinkTwitchAccountResult__Class* klass;
    MonitorData* monitor;
    struct LinkTwitchAccountResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkTwitchAccountResult_FWDDECL)
#define IL2CPP_STRUCT_LinkTwitchAccountResult_FWDDECL
#include <Modloader/app/structs/LinkTwitchAccountResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkTwitchAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkTwitchAccountResult_DEFINED) && !defined(IL2CPP_STRUCT_LinkTwitchAccountResult_FWDDECL)
#include <Modloader/app/structs/LinkTwitchAccountResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkTwitchAccountResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
