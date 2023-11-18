#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawAsButtonAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawAsButtonAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawAsButtonAttribute_DEFINED)
#define IL2CPP_STRUCT_DrawAsButtonAttribute_DEFINED
struct DrawAsButtonAttribute__Class;
struct DrawAsButtonAttribute {
    struct DrawAsButtonAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DrawAsButtonAttribute_FWDDECL)
#define IL2CPP_STRUCT_DrawAsButtonAttribute_FWDDECL
#include <Modloader/app/structs/DrawAsButtonAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DrawAsButtonAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawAsButtonAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DrawAsButtonAttribute_FWDDECL)
#include <Modloader/app/structs/DrawAsButtonAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawAsButtonAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
