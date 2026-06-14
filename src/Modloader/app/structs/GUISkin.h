#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUISkin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUISkin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISkin_DEFINED)
#include <Modloader/app/structs/GUISkin__Fields.h>
#if defined(IL2CPP_STRUCT_GUISkin__Fields_DEFINED)
#define IL2CPP_STRUCT_GUISkin_DEFINED
struct GUISkin__Class;
struct GUISkin {
    struct GUISkin__Class* klass;
    MonitorData* monitor;
    struct GUISkin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUISkin_FWDDECL)
#define IL2CPP_STRUCT_GUISkin_FWDDECL
#include <Modloader/app/structs/GUISkin__Class.h>
#endif
#undef IL2CPP_STRUCT_GUISkin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISkin_DEFINED) && !defined(IL2CPP_STRUCT_GUISkin_FWDDECL)
#include <Modloader/app/structs/GUISkin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUISkin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
