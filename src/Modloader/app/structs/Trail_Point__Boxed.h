#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_Point__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_Point__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_Point__Boxed_DEFINED)
#include <Modloader/app/structs/Trail_Point.h>
#if defined(IL2CPP_STRUCT_Trail_Point_DEFINED)
#define IL2CPP_STRUCT_Trail_Point__Boxed_DEFINED
struct Trail_Point__Class;
struct Trail_Point__Boxed {
    struct Trail_Point__Class* klass;
    MonitorData* monitor;
    struct Trail_Point fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_Point__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Trail_Point__Boxed_FWDDECL
#include <Modloader/app/structs/Trail_Point__Class.h>
#endif
#undef IL2CPP_STRUCT_Trail_Point__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_Point__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Trail_Point__Boxed_FWDDECL)
#include <Modloader/app/structs/Trail_Point__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail_Point__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
