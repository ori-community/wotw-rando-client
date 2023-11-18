#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_DEFINED
struct TypeDescriptor__Class;
struct TypeDescriptor {
    struct TypeDescriptor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_FWDDECL
#include <Modloader/app/structs/TypeDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
