#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UILineInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UILineInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UILineInfo__Boxed_DEFINED)
#include <Modloader/app/structs/UILineInfo.h>
#if defined(IL2CPP_STRUCT_UILineInfo_DEFINED)
#define IL2CPP_STRUCT_UILineInfo__Boxed_DEFINED
struct UILineInfo__Class;
struct UILineInfo__Boxed {
    struct UILineInfo__Class* klass;
    MonitorData* monitor;
    struct UILineInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UILineInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UILineInfo__Boxed_FWDDECL
#include <Modloader/app/structs/UILineInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UILineInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UILineInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UILineInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/UILineInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UILineInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
