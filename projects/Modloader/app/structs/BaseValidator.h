#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseValidator_DEFINED)
#include <Modloader/app/structs/BaseValidator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseValidator_DEFINED
struct BaseValidator__Class;
struct BaseValidator {
    struct BaseValidator__Class* klass;
    MonitorData* monitor;
    struct BaseValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseValidator_FWDDECL)
#define IL2CPP_STRUCT_BaseValidator_FWDDECL
#include <Modloader/app/structs/BaseValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseValidator_DEFINED) && !defined(IL2CPP_STRUCT_BaseValidator_FWDDECL)
#include <Modloader/app/structs/BaseValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
