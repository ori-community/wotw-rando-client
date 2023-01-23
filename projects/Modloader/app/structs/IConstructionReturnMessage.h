#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstructionReturnMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstructionReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstructionReturnMessage_DEFINED)
#define IL2CPP_STRUCT_IConstructionReturnMessage_DEFINED
struct IConstructionReturnMessage__Class;
struct IConstructionReturnMessage {
    struct IConstructionReturnMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstructionReturnMessage_FWDDECL)
#define IL2CPP_STRUCT_IConstructionReturnMessage_FWDDECL
#include <Modloader/app/structs/IConstructionReturnMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IConstructionReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstructionReturnMessage_DEFINED) && !defined(IL2CPP_STRUCT_IConstructionReturnMessage_FWDDECL)
#include <Modloader/app/structs/IConstructionReturnMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstructionReturnMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
