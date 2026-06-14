#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsReadOnlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsReadOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsReadOnlyAttribute_DEFINED)
#define IL2CPP_STRUCT_IsReadOnlyAttribute_DEFINED
struct IsReadOnlyAttribute__Class;
struct IsReadOnlyAttribute {
    struct IsReadOnlyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IsReadOnlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_IsReadOnlyAttribute_FWDDECL
#include <Modloader/app/structs/IsReadOnlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_IsReadOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsReadOnlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_IsReadOnlyAttribute_FWDDECL)
#include <Modloader/app/structs/IsReadOnlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsReadOnlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
