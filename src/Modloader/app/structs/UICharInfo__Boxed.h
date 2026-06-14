#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UICharInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UICharInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UICharInfo__Boxed_DEFINED)
#include <Modloader/app/structs/UICharInfo.h>
#if defined(IL2CPP_STRUCT_UICharInfo_DEFINED)
#define IL2CPP_STRUCT_UICharInfo__Boxed_DEFINED
struct UICharInfo__Class;
struct UICharInfo__Boxed {
    struct UICharInfo__Class* klass;
    MonitorData* monitor;
    struct UICharInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UICharInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UICharInfo__Boxed_FWDDECL
#include <Modloader/app/structs/UICharInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UICharInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UICharInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UICharInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/UICharInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UICharInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
