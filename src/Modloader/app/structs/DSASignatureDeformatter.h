#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSASignatureDeformatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSASignatureDeformatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureDeformatter_DEFINED)
#include <Modloader/app/structs/DSASignatureDeformatter__Fields.h>
#if defined(IL2CPP_STRUCT_DSASignatureDeformatter__Fields_DEFINED)
#define IL2CPP_STRUCT_DSASignatureDeformatter_DEFINED
struct DSASignatureDeformatter__Class;
struct DSASignatureDeformatter {
    struct DSASignatureDeformatter__Class* klass;
    MonitorData* monitor;
    struct DSASignatureDeformatter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSASignatureDeformatter_FWDDECL)
#define IL2CPP_STRUCT_DSASignatureDeformatter_FWDDECL
#include <Modloader/app/structs/DSASignatureDeformatter__Class.h>
#endif
#undef IL2CPP_STRUCT_DSASignatureDeformatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureDeformatter_DEFINED) && !defined(IL2CPP_STRUCT_DSASignatureDeformatter_FWDDECL)
#include <Modloader/app/structs/DSASignatureDeformatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSASignatureDeformatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
