#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoValidator_DEFINED)
#include <Modloader/app/structs/AutoValidator__Fields.h>
#if defined(IL2CPP_STRUCT_AutoValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoValidator_DEFINED
struct AutoValidator__Class;
struct AutoValidator {
    struct AutoValidator__Class* klass;
    MonitorData* monitor;
    struct AutoValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoValidator_FWDDECL)
#define IL2CPP_STRUCT_AutoValidator_FWDDECL
#include <Modloader/app/structs/AutoValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoValidator_DEFINED) && !defined(IL2CPP_STRUCT_AutoValidator_FWDDECL)
#include <Modloader/app/structs/AutoValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
