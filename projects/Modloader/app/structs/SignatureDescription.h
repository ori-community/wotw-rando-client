#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SignatureDescription_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SignatureDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_SignatureDescription_DEFINED)
#include <Modloader/app/structs/SignatureDescription__Fields.h>
#if defined(IL2CPP_STRUCT_SignatureDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_SignatureDescription_DEFINED
struct SignatureDescription__Class;
struct SignatureDescription {
    struct SignatureDescription__Class* klass;
    MonitorData* monitor;
    struct SignatureDescription__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SignatureDescription_FWDDECL)
#define IL2CPP_STRUCT_SignatureDescription_FWDDECL
#include <Modloader/app/structs/SignatureDescription__Class.h>
#endif
#undef IL2CPP_STRUCT_SignatureDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_SignatureDescription_DEFINED) && !defined(IL2CPP_STRUCT_SignatureDescription_FWDDECL)
#include <Modloader/app/structs/SignatureDescription.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SignatureDescription.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
