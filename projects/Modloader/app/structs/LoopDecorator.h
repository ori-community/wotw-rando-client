#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoopDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoopDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoopDecorator_DEFINED)
#include <Modloader/app/structs/LoopDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_LoopDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_LoopDecorator_DEFINED
struct LoopDecorator__Class;
struct LoopDecorator {
    struct LoopDecorator__Class* klass;
    MonitorData* monitor;
    struct LoopDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoopDecorator_FWDDECL)
#define IL2CPP_STRUCT_LoopDecorator_FWDDECL
#include <Modloader/app/structs/LoopDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_LoopDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoopDecorator_DEFINED) && !defined(IL2CPP_STRUCT_LoopDecorator_FWDDECL)
#include <Modloader/app/structs/LoopDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoopDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
