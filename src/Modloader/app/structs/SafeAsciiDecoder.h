#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeAsciiDecoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeAsciiDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeAsciiDecoder_DEFINED)
#include <Modloader/app/structs/SafeAsciiDecoder__Fields.h>
#if defined(IL2CPP_STRUCT_SafeAsciiDecoder__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeAsciiDecoder_DEFINED
struct SafeAsciiDecoder__Class;
struct SafeAsciiDecoder {
    struct SafeAsciiDecoder__Class* klass;
    MonitorData* monitor;
    struct SafeAsciiDecoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeAsciiDecoder_FWDDECL)
#define IL2CPP_STRUCT_SafeAsciiDecoder_FWDDECL
#include <Modloader/app/structs/SafeAsciiDecoder__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeAsciiDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeAsciiDecoder_DEFINED) && !defined(IL2CPP_STRUCT_SafeAsciiDecoder_FWDDECL)
#include <Modloader/app/structs/SafeAsciiDecoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeAsciiDecoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
