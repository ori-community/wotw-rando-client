#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_DEFINED)
#define IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_DEFINED
struct NativeContainerIsReadOnlyAttribute__Class;
struct NativeContainerIsReadOnlyAttribute {
    struct NativeContainerIsReadOnlyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_FWDDECL
#include <Modloader/app/structs/NativeContainerIsReadOnlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeContainerIsReadOnlyAttribute_FWDDECL)
#include <Modloader/app/structs/NativeContainerIsReadOnlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeContainerIsReadOnlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
