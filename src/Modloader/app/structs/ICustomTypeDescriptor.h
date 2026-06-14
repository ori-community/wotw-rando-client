#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICustomTypeDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICustomTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomTypeDescriptor_DEFINED)
#define IL2CPP_STRUCT_ICustomTypeDescriptor_DEFINED
struct ICustomTypeDescriptor__Class;
struct ICustomTypeDescriptor {
    struct ICustomTypeDescriptor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICustomTypeDescriptor_FWDDECL)
#define IL2CPP_STRUCT_ICustomTypeDescriptor_FWDDECL
#include <Modloader/app/structs/ICustomTypeDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_ICustomTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomTypeDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_ICustomTypeDescriptor_FWDDECL)
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
