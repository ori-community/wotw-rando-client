#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecorder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecorder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GhostRecorder__StaticFields_DEFINED
struct MemoryStream;
struct GhostRecorder;
struct HashSet_1_GenericPuppet_;
struct GhostRecorder__StaticFields {
    struct MemoryStream* m_stream;
    struct GhostRecorder* Instance;
    struct HashSet_1_GenericPuppet_* s_puppets;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostRecorder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GhostRecorder__StaticFields_FWDDECL
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/HashSet_1_GenericPuppet_.h>
#include <Modloader/app/structs/MemoryStream.h>
#endif
#undef IL2CPP_STRUCT_GhostRecorder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecorder__StaticFields_FWDDECL)
#include <Modloader/app/structs/GhostRecorder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecorder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
