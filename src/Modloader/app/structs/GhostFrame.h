#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostFrame_DEFINED)
#include <Modloader/app/structs/GhostFrame__Fields.h>
#if defined(IL2CPP_STRUCT_GhostFrame__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostFrame_DEFINED
struct GhostFrame__Class;
struct GhostFrame {
    struct GhostFrame__Class* klass;
    MonitorData* monitor;
    struct GhostFrame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostFrame_FWDDECL)
#define IL2CPP_STRUCT_GhostFrame_FWDDECL
#include <Modloader/app/structs/GhostFrame__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostFrame_DEFINED) && !defined(IL2CPP_STRUCT_GhostFrame_FWDDECL)
#include <Modloader/app/structs/GhostFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
