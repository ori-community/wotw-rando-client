#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidator_DEFINED)
#include <Modloader/app/structs/XsdValidator__Fields.h>
#if defined(IL2CPP_STRUCT_XsdValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdValidator_DEFINED
struct XsdValidator__Class;
struct XsdValidator {
    struct XsdValidator__Class* klass;
    MonitorData* monitor;
    struct XsdValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdValidator_FWDDECL)
#define IL2CPP_STRUCT_XsdValidator_FWDDECL
#include <Modloader/app/structs/XsdValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidator_DEFINED) && !defined(IL2CPP_STRUCT_XsdValidator_FWDDECL)
#include <Modloader/app/structs/XsdValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
