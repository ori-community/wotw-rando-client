#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_DEFINED)
#include <Modloader/app/structs/Trail__Fields.h>
#if defined(IL2CPP_STRUCT_Trail__Fields_DEFINED)
#define IL2CPP_STRUCT_Trail_DEFINED
struct Trail__Class;
struct Trail {
    struct Trail__Class* klass;
    MonitorData* monitor;
    struct Trail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_FWDDECL)
#define IL2CPP_STRUCT_Trail_FWDDECL
#include <Modloader/app/structs/Trail__Class.h>
#endif
#undef IL2CPP_STRUCT_Trail_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_DEFINED) && !defined(IL2CPP_STRUCT_Trail_FWDDECL)
#include <Modloader/app/structs/Trail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
