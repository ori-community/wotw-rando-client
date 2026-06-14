#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RootMotionProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RootMotionProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootMotionProcessor_DEFINED)
#include <Modloader/app/structs/RootMotionProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_RootMotionProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_RootMotionProcessor_DEFINED
struct RootMotionProcessor__Class;
struct RootMotionProcessor {
    struct RootMotionProcessor__Class* klass;
    MonitorData* monitor;
    struct RootMotionProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RootMotionProcessor_FWDDECL)
#define IL2CPP_STRUCT_RootMotionProcessor_FWDDECL
#include <Modloader/app/structs/RootMotionProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_RootMotionProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootMotionProcessor_DEFINED) && !defined(IL2CPP_STRUCT_RootMotionProcessor_FWDDECL)
#include <Modloader/app/structs/RootMotionProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RootMotionProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
