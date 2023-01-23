#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DfaContentValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DfaContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DfaContentValidator_DEFINED)
#include <Modloader/app/structs/DfaContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_DfaContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_DfaContentValidator_DEFINED
struct DfaContentValidator__Class;
struct DfaContentValidator {
    struct DfaContentValidator__Class* klass;
    MonitorData* monitor;
    struct DfaContentValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DfaContentValidator_FWDDECL)
#define IL2CPP_STRUCT_DfaContentValidator_FWDDECL
#include <Modloader/app/structs/DfaContentValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_DfaContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DfaContentValidator_DEFINED) && !defined(IL2CPP_STRUCT_DfaContentValidator_FWDDECL)
#include <Modloader/app/structs/DfaContentValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DfaContentValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
