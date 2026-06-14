#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBlackboard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBlackboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBlackboard_DEFINED)
#define IL2CPP_STRUCT_IBlackboard_DEFINED
struct IBlackboard__Class;
struct IBlackboard {
    struct IBlackboard__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBlackboard_FWDDECL)
#define IL2CPP_STRUCT_IBlackboard_FWDDECL
#include <Modloader/app/structs/IBlackboard__Class.h>
#endif
#undef IL2CPP_STRUCT_IBlackboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBlackboard_DEFINED) && !defined(IL2CPP_STRUCT_IBlackboard_FWDDECL)
#include <Modloader/app/structs/IBlackboard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBlackboard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
