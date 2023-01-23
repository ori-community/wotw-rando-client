#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendState__Boxed_DEFINED)
#include <Modloader/app/structs/BlendState.h>
#if defined(IL2CPP_STRUCT_BlendState_DEFINED)
#define IL2CPP_STRUCT_BlendState__Boxed_DEFINED
struct BlendState__Class;
struct BlendState__Boxed {
    struct BlendState__Class* klass;
    MonitorData* monitor;
    struct BlendState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_BlendState__Boxed_FWDDECL
#include <Modloader/app/structs/BlendState__Class.h>
#endif
#undef IL2CPP_STRUCT_BlendState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_BlendState__Boxed_FWDDECL)
#include <Modloader/app/structs/BlendState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
