#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPassiveStateDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPassiveStateDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPassiveStateDescriptor_DEFINED)
#define IL2CPP_STRUCT_IPassiveStateDescriptor_DEFINED
struct IPassiveStateDescriptor__Class;
struct IPassiveStateDescriptor {
    struct IPassiveStateDescriptor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPassiveStateDescriptor_FWDDECL)
#define IL2CPP_STRUCT_IPassiveStateDescriptor_FWDDECL
#include <Modloader/app/structs/IPassiveStateDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_IPassiveStateDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPassiveStateDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_IPassiveStateDescriptor_FWDDECL)
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
