#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITurbulenceInfluencer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITurbulenceInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITurbulenceInfluencer_DEFINED)
#define IL2CPP_STRUCT_ITurbulenceInfluencer_DEFINED
struct ITurbulenceInfluencer__Class;
struct ITurbulenceInfluencer {
    struct ITurbulenceInfluencer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITurbulenceInfluencer_FWDDECL)
#define IL2CPP_STRUCT_ITurbulenceInfluencer_FWDDECL
#include <Modloader/app/structs/ITurbulenceInfluencer__Class.h>
#endif
#undef IL2CPP_STRUCT_ITurbulenceInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITurbulenceInfluencer_DEFINED) && !defined(IL2CPP_STRUCT_ITurbulenceInfluencer_FWDDECL)
#include <Modloader/app/structs/ITurbulenceInfluencer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITurbulenceInfluencer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
