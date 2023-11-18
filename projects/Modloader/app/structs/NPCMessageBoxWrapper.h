#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCMessageBoxWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCMessageBoxWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCMessageBoxWrapper_DEFINED)
#include <Modloader/app/structs/NPCMessageBoxWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_NPCMessageBoxWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCMessageBoxWrapper_DEFINED
struct NPCMessageBoxWrapper__Class;
struct NPCMessageBoxWrapper {
    struct NPCMessageBoxWrapper__Class* klass;
    MonitorData* monitor;
    struct NPCMessageBoxWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCMessageBoxWrapper_FWDDECL)
#define IL2CPP_STRUCT_NPCMessageBoxWrapper_FWDDECL
#include <Modloader/app/structs/NPCMessageBoxWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCMessageBoxWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCMessageBoxWrapper_DEFINED) && !defined(IL2CPP_STRUCT_NPCMessageBoxWrapper_FWDDECL)
#include <Modloader/app/structs/NPCMessageBoxWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCMessageBoxWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
