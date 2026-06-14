#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEventDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventDescriptor_DEFINED)
#define IL2CPP_STRUCT_IEventDescriptor_DEFINED
struct IEventDescriptor__Class;
struct IEventDescriptor {
    struct IEventDescriptor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEventDescriptor_FWDDECL)
#define IL2CPP_STRUCT_IEventDescriptor_FWDDECL
#include <Modloader/app/structs/IEventDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_IEventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_IEventDescriptor_FWDDECL)
#include <Modloader/app/structs/IEventDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEventDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
