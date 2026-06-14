#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugDecorator_DEFINED)
#include <Modloader/app/structs/DebugDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_DebugDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugDecorator_DEFINED
struct DebugDecorator__Class;
struct DebugDecorator {
    struct DebugDecorator__Class* klass;
    MonitorData* monitor;
    struct DebugDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugDecorator_FWDDECL)
#define IL2CPP_STRUCT_DebugDecorator_FWDDECL
#include <Modloader/app/structs/DebugDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugDecorator_DEFINED) && !defined(IL2CPP_STRUCT_DebugDecorator_FWDDECL)
#include <Modloader/app/structs/DebugDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
