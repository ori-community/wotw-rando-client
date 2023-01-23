#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Playable__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Playable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Playable__Boxed_DEFINED)
#include <Modloader/app/structs/Playable.h>
#if defined(IL2CPP_STRUCT_Playable_DEFINED)
#define IL2CPP_STRUCT_Playable__Boxed_DEFINED
struct Playable__Class;
struct Playable__Boxed {
    struct Playable__Class* klass;
    MonitorData* monitor;
    struct Playable fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Playable__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Playable__Boxed_FWDDECL
#include <Modloader/app/structs/Playable__Class.h>
#endif
#undef IL2CPP_STRUCT_Playable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Playable__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Playable__Boxed_FWDDECL)
#include <Modloader/app/structs/Playable__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Playable__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
