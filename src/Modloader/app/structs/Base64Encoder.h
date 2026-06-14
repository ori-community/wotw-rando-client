#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64Encoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64Encoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Encoder_DEFINED)
#include <Modloader/app/structs/Base64Encoder__Fields.h>
#if defined(IL2CPP_STRUCT_Base64Encoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64Encoder_DEFINED
struct Base64Encoder__Class;
struct Base64Encoder {
    struct Base64Encoder__Class* klass;
    MonitorData* monitor;
    struct Base64Encoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Base64Encoder_FWDDECL)
#define IL2CPP_STRUCT_Base64Encoder_FWDDECL
#include <Modloader/app/structs/Base64Encoder__Class.h>
#endif
#undef IL2CPP_STRUCT_Base64Encoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Encoder_DEFINED) && !defined(IL2CPP_STRUCT_Base64Encoder_FWDDECL)
#include <Modloader/app/structs/Base64Encoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64Encoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
