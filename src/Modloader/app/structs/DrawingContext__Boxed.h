#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawingContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawingContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawingContext__Boxed_DEFINED)
#include <Modloader/app/structs/DrawingContext.h>
#if defined(IL2CPP_STRUCT_DrawingContext_DEFINED)
#define IL2CPP_STRUCT_DrawingContext__Boxed_DEFINED
struct DrawingContext__Class;
struct DrawingContext__Boxed {
    struct DrawingContext__Class* klass;
    MonitorData* monitor;
    struct DrawingContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrawingContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DrawingContext__Boxed_FWDDECL
#include <Modloader/app/structs/DrawingContext__Class.h>
#endif
#undef IL2CPP_STRUCT_DrawingContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawingContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DrawingContext__Boxed_FWDDECL)
#include <Modloader/app/structs/DrawingContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawingContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
