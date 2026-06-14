#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CooldownDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CooldownDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CooldownDecorator_DEFINED)
#include <Modloader/app/structs/CooldownDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_CooldownDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_CooldownDecorator_DEFINED
struct CooldownDecorator__Class;
struct CooldownDecorator {
    struct CooldownDecorator__Class* klass;
    MonitorData* monitor;
    struct CooldownDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CooldownDecorator_FWDDECL)
#define IL2CPP_STRUCT_CooldownDecorator_FWDDECL
#include <Modloader/app/structs/CooldownDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_CooldownDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CooldownDecorator_DEFINED) && !defined(IL2CPP_STRUCT_CooldownDecorator_FWDDECL)
#include <Modloader/app/structs/CooldownDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CooldownDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
