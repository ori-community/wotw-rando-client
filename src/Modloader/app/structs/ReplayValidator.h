#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_DEFINED)
#define IL2CPP_STRUCT_ReplayValidator_DEFINED
struct ReplayValidator__Class;
struct ReplayValidator {
    struct ReplayValidator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidator_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidator_FWDDECL
#include <Modloader/app/structs/ReplayValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidator_FWDDECL)
#include <Modloader/app/structs/ReplayValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
