#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationResult_DEFINED)
#include <Modloader/app/structs/ValidationResult__Fields.h>
#if defined(IL2CPP_STRUCT_ValidationResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidationResult_DEFINED
struct ValidationResult__Class;
struct ValidationResult {
    struct ValidationResult__Class* klass;
    MonitorData* monitor;
    struct ValidationResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationResult_FWDDECL)
#define IL2CPP_STRUCT_ValidationResult_FWDDECL
#include <Modloader/app/structs/ValidationResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidationResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationResult_DEFINED) && !defined(IL2CPP_STRUCT_ValidationResult_FWDDECL)
#include <Modloader/app/structs/ValidationResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
