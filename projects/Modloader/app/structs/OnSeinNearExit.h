#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnSeinNearExit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnSeinNearExit_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSeinNearExit_DEFINED)
#define IL2CPP_STRUCT_OnSeinNearExit_DEFINED
struct OnSeinNearExit__Class;
struct OnSeinNearExit {
    struct OnSeinNearExit__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnSeinNearExit_FWDDECL)
#define IL2CPP_STRUCT_OnSeinNearExit_FWDDECL
#include <Modloader/app/structs/OnSeinNearExit__Class.h>
#endif
#undef IL2CPP_STRUCT_OnSeinNearExit_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSeinNearExit_DEFINED) && !defined(IL2CPP_STRUCT_OnSeinNearExit_FWDDECL)
#include <Modloader/app/structs/OnSeinNearExit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnSeinNearExit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
