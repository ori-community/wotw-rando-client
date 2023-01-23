#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecuritySafeCriticalAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecuritySafeCriticalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecuritySafeCriticalAttribute_DEFINED)
#define IL2CPP_STRUCT_SecuritySafeCriticalAttribute_DEFINED
struct SecuritySafeCriticalAttribute__Class;
struct SecuritySafeCriticalAttribute {
    struct SecuritySafeCriticalAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SecuritySafeCriticalAttribute_FWDDECL)
#define IL2CPP_STRUCT_SecuritySafeCriticalAttribute_FWDDECL
#include <Modloader/app/structs/SecuritySafeCriticalAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SecuritySafeCriticalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecuritySafeCriticalAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SecuritySafeCriticalAttribute_FWDDECL)
#include <Modloader/app/structs/SecuritySafeCriticalAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecuritySafeCriticalAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
