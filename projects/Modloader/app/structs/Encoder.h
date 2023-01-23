#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoder_DEFINED)
#include <Modloader/app/structs/Encoder__Fields.h>
#if defined(IL2CPP_STRUCT_Encoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoder_DEFINED
struct Encoder__Class;
struct Encoder {
    struct Encoder__Class* klass;
    MonitorData* monitor;
    struct Encoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Encoder_FWDDECL)
#define IL2CPP_STRUCT_Encoder_FWDDECL
#include <Modloader/app/structs/Encoder__Class.h>
#endif
#undef IL2CPP_STRUCT_Encoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoder_DEFINED) && !defined(IL2CPP_STRUCT_Encoder_FWDDECL)
#include <Modloader/app/structs/Encoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
