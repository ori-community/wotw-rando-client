#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMedia_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMedia_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMedia_DEFINED)
#include <Modloader/app/structs/AVProWindowsMedia__Fields.h>
#if defined(IL2CPP_STRUCT_AVProWindowsMedia__Fields_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMedia_DEFINED
struct AVProWindowsMedia__Class;
struct AVProWindowsMedia {
    struct AVProWindowsMedia__Class* klass;
    MonitorData* monitor;
    struct AVProWindowsMedia__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMedia_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMedia_FWDDECL
#include <Modloader/app/structs/AVProWindowsMedia__Class.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMedia_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMedia_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMedia_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMedia.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMedia.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
