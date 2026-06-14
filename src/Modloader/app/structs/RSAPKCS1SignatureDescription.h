#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAPKCS1SignatureDescription_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAPKCS1SignatureDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDescription_DEFINED)
#include <Modloader/app/structs/RSAPKCS1SignatureDescription__Fields.h>
#if defined(IL2CPP_STRUCT_RSAPKCS1SignatureDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_RSAPKCS1SignatureDescription_DEFINED
struct RSAPKCS1SignatureDescription__Class;
struct RSAPKCS1SignatureDescription {
    struct RSAPKCS1SignatureDescription__Class* klass;
    MonitorData* monitor;
    struct RSAPKCS1SignatureDescription__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDescription_FWDDECL)
#define IL2CPP_STRUCT_RSAPKCS1SignatureDescription_FWDDECL
#include <Modloader/app/structs/RSAPKCS1SignatureDescription__Class.h>
#endif
#undef IL2CPP_STRUCT_RSAPKCS1SignatureDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDescription_DEFINED) && !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDescription_FWDDECL)
#include <Modloader/app/structs/RSAPKCS1SignatureDescription.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAPKCS1SignatureDescription.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
