#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityBufferDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityBufferDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBufferDescriptor_DEFINED)
#include <Modloader/app/structs/SecurityBufferDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityBufferDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityBufferDescriptor_DEFINED
struct SecurityBufferDescriptor__Class;
struct SecurityBufferDescriptor {
    struct SecurityBufferDescriptor__Class* klass;
    MonitorData* monitor;
    struct SecurityBufferDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityBufferDescriptor_FWDDECL)
#define IL2CPP_STRUCT_SecurityBufferDescriptor_FWDDECL
#include <Modloader/app/structs/SecurityBufferDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityBufferDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBufferDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_SecurityBufferDescriptor_FWDDECL)
#include <Modloader/app/structs/SecurityBufferDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityBufferDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
