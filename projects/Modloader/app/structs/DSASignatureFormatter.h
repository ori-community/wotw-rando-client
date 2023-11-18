#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSASignatureFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSASignatureFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureFormatter_DEFINED)
#include <Modloader/app/structs/DSASignatureFormatter__Fields.h>
#if defined(IL2CPP_STRUCT_DSASignatureFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_DSASignatureFormatter_DEFINED
struct DSASignatureFormatter__Class;
struct DSASignatureFormatter {
    struct DSASignatureFormatter__Class* klass;
    MonitorData* monitor;
    struct DSASignatureFormatter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSASignatureFormatter_FWDDECL)
#define IL2CPP_STRUCT_DSASignatureFormatter_FWDDECL
#include <Modloader/app/structs/DSASignatureFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_DSASignatureFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureFormatter_DEFINED) && !defined(IL2CPP_STRUCT_DSASignatureFormatter_FWDDECL)
#include <Modloader/app/structs/DSASignatureFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSASignatureFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
