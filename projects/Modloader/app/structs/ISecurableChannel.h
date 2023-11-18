#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISecurableChannel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISecurableChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISecurableChannel_DEFINED)
#define IL2CPP_STRUCT_ISecurableChannel_DEFINED
struct ISecurableChannel__Class;
struct ISecurableChannel {
    struct ISecurableChannel__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISecurableChannel_FWDDECL)
#define IL2CPP_STRUCT_ISecurableChannel_FWDDECL
#include <Modloader/app/structs/ISecurableChannel__Class.h>
#endif
#undef IL2CPP_STRUCT_ISecurableChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISecurableChannel_DEFINED) && !defined(IL2CPP_STRUCT_ISecurableChannel_FWDDECL)
#include <Modloader/app/structs/ISecurableChannel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISecurableChannel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
