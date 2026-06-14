#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WhiteBalance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WhiteBalance_INITIALIZING
#if !defined(IL2CPP_STRUCT_WhiteBalance_DEFINED)
#include <Modloader/app/structs/WhiteBalance__Fields.h>
#if defined(IL2CPP_STRUCT_WhiteBalance__Fields_DEFINED)
#define IL2CPP_STRUCT_WhiteBalance_DEFINED
struct WhiteBalance__Class;
struct WhiteBalance {
    struct WhiteBalance__Class* klass;
    MonitorData* monitor;
    struct WhiteBalance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WhiteBalance_FWDDECL)
#define IL2CPP_STRUCT_WhiteBalance_FWDDECL
#include <Modloader/app/structs/WhiteBalance__Class.h>
#endif
#undef IL2CPP_STRUCT_WhiteBalance_INITIALIZING
#if !defined(IL2CPP_STRUCT_WhiteBalance_DEFINED) && !defined(IL2CPP_STRUCT_WhiteBalance_FWDDECL)
#include <Modloader/app/structs/WhiteBalance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WhiteBalance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
