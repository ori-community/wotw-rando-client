#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatFraction__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatFraction__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatFraction__Boxed_DEFINED)
#include <Modloader/app/structs/FloatFraction.h>
#if defined(IL2CPP_STRUCT_FloatFraction_DEFINED)
#define IL2CPP_STRUCT_FloatFraction__Boxed_DEFINED
struct FloatFraction__Class;
struct FloatFraction__Boxed {
    struct FloatFraction__Class* klass;
    MonitorData* monitor;
    struct FloatFraction fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatFraction__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FloatFraction__Boxed_FWDDECL
#include <Modloader/app/structs/FloatFraction__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatFraction__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatFraction__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FloatFraction__Boxed_FWDDECL)
#include <Modloader/app/structs/FloatFraction__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatFraction__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
