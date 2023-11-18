#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastEncoderWindow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastEncoderWindow_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderWindow_DEFINED)
#include <Modloader/app/structs/FastEncoderWindow__Fields.h>
#if defined(IL2CPP_STRUCT_FastEncoderWindow__Fields_DEFINED)
#define IL2CPP_STRUCT_FastEncoderWindow_DEFINED
struct FastEncoderWindow__Class;
struct FastEncoderWindow {
    struct FastEncoderWindow__Class* klass;
    MonitorData* monitor;
    struct FastEncoderWindow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FastEncoderWindow_FWDDECL)
#define IL2CPP_STRUCT_FastEncoderWindow_FWDDECL
#include <Modloader/app/structs/FastEncoderWindow__Class.h>
#endif
#undef IL2CPP_STRUCT_FastEncoderWindow_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderWindow_DEFINED) && !defined(IL2CPP_STRUCT_FastEncoderWindow_FWDDECL)
#include <Modloader/app/structs/FastEncoderWindow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastEncoderWindow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
