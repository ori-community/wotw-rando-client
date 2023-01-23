#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorBlock__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorBlock__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorBlock__Boxed_DEFINED)
#include <Modloader/app/structs/ColorBlock.h>
#if defined(IL2CPP_STRUCT_ColorBlock_DEFINED)
#define IL2CPP_STRUCT_ColorBlock__Boxed_DEFINED
struct ColorBlock__Class;
struct ColorBlock__Boxed {
    struct ColorBlock__Class* klass;
    MonitorData* monitor;
    struct ColorBlock fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorBlock__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ColorBlock__Boxed_FWDDECL
#include <Modloader/app/structs/ColorBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorBlock__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorBlock__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ColorBlock__Boxed_FWDDECL)
#include <Modloader/app/structs/ColorBlock__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorBlock__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
