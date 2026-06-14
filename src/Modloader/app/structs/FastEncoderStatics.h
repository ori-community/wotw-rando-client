#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastEncoderStatics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastEncoderStatics_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderStatics_DEFINED)
#define IL2CPP_STRUCT_FastEncoderStatics_DEFINED
struct FastEncoderStatics__Class;
struct FastEncoderStatics {
    struct FastEncoderStatics__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FastEncoderStatics_FWDDECL)
#define IL2CPP_STRUCT_FastEncoderStatics_FWDDECL
#include <Modloader/app/structs/FastEncoderStatics__Class.h>
#endif
#undef IL2CPP_STRUCT_FastEncoderStatics_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderStatics_DEFINED) && !defined(IL2CPP_STRUCT_FastEncoderStatics_FWDDECL)
#include <Modloader/app/structs/FastEncoderStatics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastEncoderStatics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
