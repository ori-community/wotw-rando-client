#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovePivotAlert_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovePivotAlert_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovePivotAlert_DEFINED)
#include <Modloader/app/structs/MovePivotAlert__Fields.h>
#if defined(IL2CPP_STRUCT_MovePivotAlert__Fields_DEFINED)
#define IL2CPP_STRUCT_MovePivotAlert_DEFINED
struct MovePivotAlert__Class;
struct MovePivotAlert {
    struct MovePivotAlert__Class* klass;
    MonitorData* monitor;
    struct MovePivotAlert__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovePivotAlert_FWDDECL)
#define IL2CPP_STRUCT_MovePivotAlert_FWDDECL
#include <Modloader/app/structs/MovePivotAlert__Class.h>
#endif
#undef IL2CPP_STRUCT_MovePivotAlert_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovePivotAlert_DEFINED) && !defined(IL2CPP_STRUCT_MovePivotAlert_FWDDECL)
#include <Modloader/app/structs/MovePivotAlert.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovePivotAlert.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
