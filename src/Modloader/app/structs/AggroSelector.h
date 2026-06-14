#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggroSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggroSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggroSelector_DEFINED)
#define IL2CPP_STRUCT_AggroSelector_DEFINED
struct AggroSelector__Class;
struct AggroSelector {
    struct AggroSelector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AggroSelector_FWDDECL)
#define IL2CPP_STRUCT_AggroSelector_FWDDECL
#include <Modloader/app/structs/AggroSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_AggroSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggroSelector_DEFINED) && !defined(IL2CPP_STRUCT_AggroSelector_FWDDECL)
#include <Modloader/app/structs/AggroSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggroSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
