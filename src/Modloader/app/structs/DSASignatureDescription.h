#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSASignatureDescription_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSASignatureDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureDescription_DEFINED)
#include <Modloader/app/structs/DSASignatureDescription__Fields.h>
#if defined(IL2CPP_STRUCT_DSASignatureDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_DSASignatureDescription_DEFINED
struct DSASignatureDescription__Class;
struct DSASignatureDescription {
    struct DSASignatureDescription__Class* klass;
    MonitorData* monitor;
    struct DSASignatureDescription__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSASignatureDescription_FWDDECL)
#define IL2CPP_STRUCT_DSASignatureDescription_FWDDECL
#include <Modloader/app/structs/DSASignatureDescription__Class.h>
#endif
#undef IL2CPP_STRUCT_DSASignatureDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureDescription_DEFINED) && !defined(IL2CPP_STRUCT_DSASignatureDescription_FWDDECL)
#include <Modloader/app/structs/DSASignatureDescription.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSASignatureDescription.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
