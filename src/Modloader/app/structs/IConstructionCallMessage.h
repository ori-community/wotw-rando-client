#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstructionCallMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstructionCallMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstructionCallMessage_DEFINED)
#define IL2CPP_STRUCT_IConstructionCallMessage_DEFINED
struct IConstructionCallMessage__Class;
struct IConstructionCallMessage {
    struct IConstructionCallMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstructionCallMessage_FWDDECL)
#define IL2CPP_STRUCT_IConstructionCallMessage_FWDDECL
#include <Modloader/app/structs/IConstructionCallMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IConstructionCallMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstructionCallMessage_DEFINED) && !defined(IL2CPP_STRUCT_IConstructionCallMessage_FWDDECL)
#include <Modloader/app/structs/IConstructionCallMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstructionCallMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
