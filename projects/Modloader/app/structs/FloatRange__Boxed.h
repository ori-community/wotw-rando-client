#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatRange__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatRange__Boxed_DEFINED)
#include <Modloader/app/structs/FloatRange.h>
#if defined(IL2CPP_STRUCT_FloatRange_DEFINED)
#define IL2CPP_STRUCT_FloatRange__Boxed_DEFINED
struct FloatRange__Class;
struct FloatRange__Boxed {
    struct FloatRange__Class* klass;
    MonitorData* monitor;
    struct FloatRange fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatRange__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FloatRange__Boxed_FWDDECL
#include <Modloader/app/structs/FloatRange__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatRange__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FloatRange__Boxed_FWDDECL)
#include <Modloader/app/structs/FloatRange__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatRange__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
