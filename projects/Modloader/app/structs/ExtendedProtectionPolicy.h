#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtendedProtectionPolicy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtendedProtectionPolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtendedProtectionPolicy_DEFINED)
#define IL2CPP_STRUCT_ExtendedProtectionPolicy_DEFINED
struct ExtendedProtectionPolicy__Class;
struct ExtendedProtectionPolicy {
    struct ExtendedProtectionPolicy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExtendedProtectionPolicy_FWDDECL)
#define IL2CPP_STRUCT_ExtendedProtectionPolicy_FWDDECL
#include <Modloader/app/structs/ExtendedProtectionPolicy__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtendedProtectionPolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtendedProtectionPolicy_DEFINED) && !defined(IL2CPP_STRUCT_ExtendedProtectionPolicy_FWDDECL)
#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
