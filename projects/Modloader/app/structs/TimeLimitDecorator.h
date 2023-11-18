#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeLimitDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeLimitDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeLimitDecorator_DEFINED)
#include <Modloader/app/structs/TimeLimitDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_TimeLimitDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeLimitDecorator_DEFINED
struct TimeLimitDecorator__Class;
struct TimeLimitDecorator {
    struct TimeLimitDecorator__Class* klass;
    MonitorData* monitor;
    struct TimeLimitDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeLimitDecorator_FWDDECL)
#define IL2CPP_STRUCT_TimeLimitDecorator_FWDDECL
#include <Modloader/app/structs/TimeLimitDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeLimitDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeLimitDecorator_DEFINED) && !defined(IL2CPP_STRUCT_TimeLimitDecorator_FWDDECL)
#include <Modloader/app/structs/TimeLimitDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeLimitDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
