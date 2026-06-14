#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrValidator_DEFINED)
#include <Modloader/app/structs/XdrValidator__Fields.h>
#if defined(IL2CPP_STRUCT_XdrValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrValidator_DEFINED
struct XdrValidator__Class;
struct XdrValidator {
    struct XdrValidator__Class* klass;
    MonitorData* monitor;
    struct XdrValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrValidator_FWDDECL)
#define IL2CPP_STRUCT_XdrValidator_FWDDECL
#include <Modloader/app/structs/XdrValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrValidator_DEFINED) && !defined(IL2CPP_STRUCT_XdrValidator_FWDDECL)
#include <Modloader/app/structs/XdrValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
