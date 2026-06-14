#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectOffset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectOffset_DEFINED)
#include <Modloader/app/structs/RectOffset__Fields.h>
#if defined(IL2CPP_STRUCT_RectOffset__Fields_DEFINED)
#define IL2CPP_STRUCT_RectOffset_DEFINED
struct RectOffset__Class;
struct RectOffset {
    struct RectOffset__Class* klass;
    MonitorData* monitor;
    struct RectOffset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RectOffset_FWDDECL)
#define IL2CPP_STRUCT_RectOffset_FWDDECL
#include <Modloader/app/structs/RectOffset__Class.h>
#endif
#undef IL2CPP_STRUCT_RectOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectOffset_DEFINED) && !defined(IL2CPP_STRUCT_RectOffset_FWDDECL)
#include <Modloader/app/structs/RectOffset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectOffset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
