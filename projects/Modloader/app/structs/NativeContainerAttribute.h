#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeContainerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeContainerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeContainerAttribute_DEFINED)
#define IL2CPP_STRUCT_NativeContainerAttribute_DEFINED
struct NativeContainerAttribute__Class;
struct NativeContainerAttribute {
    struct NativeContainerAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeContainerAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeContainerAttribute_FWDDECL
#include <Modloader/app/structs/NativeContainerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeContainerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeContainerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeContainerAttribute_FWDDECL)
#include <Modloader/app/structs/NativeContainerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeContainerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
