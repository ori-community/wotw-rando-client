#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StencilState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StencilState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilState__Boxed_DEFINED)
#include <Modloader/app/structs/StencilState.h>
#if defined(IL2CPP_STRUCT_StencilState_DEFINED)
#define IL2CPP_STRUCT_StencilState__Boxed_DEFINED
struct StencilState__Class;
struct StencilState__Boxed {
    struct StencilState__Class* klass;
    MonitorData* monitor;
    struct StencilState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StencilState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StencilState__Boxed_FWDDECL
#include <Modloader/app/structs/StencilState__Class.h>
#endif
#undef IL2CPP_STRUCT_StencilState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StencilState__Boxed_FWDDECL)
#include <Modloader/app/structs/StencilState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StencilState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
