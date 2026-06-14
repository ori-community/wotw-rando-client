#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NfaContentValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NfaContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_NfaContentValidator_DEFINED)
#include <Modloader/app/structs/NfaContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_NfaContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_NfaContentValidator_DEFINED
struct NfaContentValidator__Class;
struct NfaContentValidator {
    struct NfaContentValidator__Class* klass;
    MonitorData* monitor;
    struct NfaContentValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NfaContentValidator_FWDDECL)
#define IL2CPP_STRUCT_NfaContentValidator_FWDDECL
#include <Modloader/app/structs/NfaContentValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_NfaContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_NfaContentValidator_DEFINED) && !defined(IL2CPP_STRUCT_NfaContentValidator_FWDDECL)
#include <Modloader/app/structs/NfaContentValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NfaContentValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
