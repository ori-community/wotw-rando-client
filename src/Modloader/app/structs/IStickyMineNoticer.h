#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStickyMineNoticer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStickyMineNoticer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStickyMineNoticer_DEFINED)
#define IL2CPP_STRUCT_IStickyMineNoticer_DEFINED
struct IStickyMineNoticer__Class;
struct IStickyMineNoticer {
    struct IStickyMineNoticer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IStickyMineNoticer_FWDDECL)
#define IL2CPP_STRUCT_IStickyMineNoticer_FWDDECL
#include <Modloader/app/structs/IStickyMineNoticer__Class.h>
#endif
#undef IL2CPP_STRUCT_IStickyMineNoticer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStickyMineNoticer_DEFINED) && !defined(IL2CPP_STRUCT_IStickyMineNoticer_FWDDECL)
#include <Modloader/app/structs/IStickyMineNoticer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStickyMineNoticer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
