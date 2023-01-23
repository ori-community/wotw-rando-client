#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatTween__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatTween__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatTween__Boxed_DEFINED)
#include <Modloader/app/structs/FloatTween.h>
#if defined(IL2CPP_STRUCT_FloatTween_DEFINED)
#define IL2CPP_STRUCT_FloatTween__Boxed_DEFINED
struct FloatTween__Class;
struct FloatTween__Boxed {
    struct FloatTween__Class* klass;
    MonitorData* monitor;
    struct FloatTween fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatTween__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FloatTween__Boxed_FWDDECL
#include <Modloader/app/structs/FloatTween__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatTween__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatTween__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FloatTween__Boxed_FWDDECL)
#include <Modloader/app/structs/FloatTween__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatTween__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
