#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Angle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Angle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Angle__Boxed_DEFINED)
#include <Modloader/app/structs/Angle.h>
#if defined(IL2CPP_STRUCT_Angle_DEFINED)
#define IL2CPP_STRUCT_Angle__Boxed_DEFINED
struct Angle__Class;
struct Angle__Boxed {
    struct Angle__Class* klass;
    MonitorData* monitor;
    struct Angle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Angle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Angle__Boxed_FWDDECL
#include <Modloader/app/structs/Angle__Class.h>
#endif
#undef IL2CPP_STRUCT_Angle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Angle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Angle__Boxed_FWDDECL)
#include <Modloader/app/structs/Angle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Angle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
