#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFieldOfViewInfluencer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFieldOfViewInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFieldOfViewInfluencer_DEFINED)
#define IL2CPP_STRUCT_IFieldOfViewInfluencer_DEFINED
struct IFieldOfViewInfluencer__Class;
struct IFieldOfViewInfluencer {
    struct IFieldOfViewInfluencer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFieldOfViewInfluencer_FWDDECL)
#define IL2CPP_STRUCT_IFieldOfViewInfluencer_FWDDECL
#include <Modloader/app/structs/IFieldOfViewInfluencer__Class.h>
#endif
#undef IL2CPP_STRUCT_IFieldOfViewInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFieldOfViewInfluencer_DEFINED) && !defined(IL2CPP_STRUCT_IFieldOfViewInfluencer_FWDDECL)
#include <Modloader/app/structs/IFieldOfViewInfluencer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFieldOfViewInfluencer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
