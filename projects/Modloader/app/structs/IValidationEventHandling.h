#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IValidationEventHandling_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IValidationEventHandling_INITIALIZING
#if !defined(IL2CPP_STRUCT_IValidationEventHandling_DEFINED)
#define IL2CPP_STRUCT_IValidationEventHandling_DEFINED
struct IValidationEventHandling__Class;
struct IValidationEventHandling {
    struct IValidationEventHandling__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IValidationEventHandling_FWDDECL)
#define IL2CPP_STRUCT_IValidationEventHandling_FWDDECL
#include <Modloader/app/structs/IValidationEventHandling__Class.h>
#endif
#undef IL2CPP_STRUCT_IValidationEventHandling_INITIALIZING
#if !defined(IL2CPP_STRUCT_IValidationEventHandling_DEFINED) && !defined(IL2CPP_STRUCT_IValidationEventHandling_FWDDECL)
#include <Modloader/app/structs/IValidationEventHandling.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IValidationEventHandling.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
