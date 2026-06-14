#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityCriticalAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityCriticalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityCriticalAttribute_DEFINED)
#define IL2CPP_STRUCT_SecurityCriticalAttribute_DEFINED
struct SecurityCriticalAttribute__Class;
struct SecurityCriticalAttribute {
    struct SecurityCriticalAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityCriticalAttribute_FWDDECL)
#define IL2CPP_STRUCT_SecurityCriticalAttribute_FWDDECL
#include <Modloader/app/structs/SecurityCriticalAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityCriticalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityCriticalAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SecurityCriticalAttribute_FWDDECL)
#include <Modloader/app/structs/SecurityCriticalAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityCriticalAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
