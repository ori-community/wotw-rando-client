#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBubbleKiller_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBubbleKiller_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBubbleKiller_DEFINED)
#define IL2CPP_STRUCT_IBubbleKiller_DEFINED
struct IBubbleKiller__Class;
struct IBubbleKiller {
    struct IBubbleKiller__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBubbleKiller_FWDDECL)
#define IL2CPP_STRUCT_IBubbleKiller_FWDDECL
#include <Modloader/app/structs/IBubbleKiller__Class.h>
#endif
#undef IL2CPP_STRUCT_IBubbleKiller_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBubbleKiller_DEFINED) && !defined(IL2CPP_STRUCT_IBubbleKiller_FWDDECL)
#include <Modloader/app/structs/IBubbleKiller.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBubbleKiller.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
