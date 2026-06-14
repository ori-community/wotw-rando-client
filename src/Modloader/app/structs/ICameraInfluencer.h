#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICameraInfluencer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICameraInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICameraInfluencer_DEFINED)
#define IL2CPP_STRUCT_ICameraInfluencer_DEFINED
struct ICameraInfluencer__Class;
struct ICameraInfluencer {
    struct ICameraInfluencer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICameraInfluencer_FWDDECL)
#define IL2CPP_STRUCT_ICameraInfluencer_FWDDECL
#include <Modloader/app/structs/ICameraInfluencer__Class.h>
#endif
#undef IL2CPP_STRUCT_ICameraInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICameraInfluencer_DEFINED) && !defined(IL2CPP_STRUCT_ICameraInfluencer_FWDDECL)
#include <Modloader/app/structs/ICameraInfluencer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICameraInfluencer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
