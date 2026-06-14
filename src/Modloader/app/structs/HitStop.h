#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitStop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitStop_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStop_DEFINED)
#include <Modloader/app/structs/HitStop__Fields.h>
#if defined(IL2CPP_STRUCT_HitStop__Fields_DEFINED)
#define IL2CPP_STRUCT_HitStop_DEFINED
struct HitStop__Class;
struct HitStop {
    struct HitStop__Class* klass;
    MonitorData* monitor;
    struct HitStop__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitStop_FWDDECL)
#define IL2CPP_STRUCT_HitStop_FWDDECL
#include <Modloader/app/structs/HitStop__Class.h>
#endif
#undef IL2CPP_STRUCT_HitStop_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStop_DEFINED) && !defined(IL2CPP_STRUCT_HitStop_FWDDECL)
#include <Modloader/app/structs/HitStop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitStop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
