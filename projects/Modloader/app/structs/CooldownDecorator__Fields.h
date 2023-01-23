#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CooldownDecorator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CooldownDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CooldownDecorator__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DecoratorNode__Fields.h>
#if defined(IL2CPP_STRUCT_DecoratorNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_CooldownDecorator__Fields_DEFINED
struct MoonFloat;
struct CooldownDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct MoonFloat* CooldownTime;
    struct MoonFloat* StartingWaitTime;
    BehaviourStatus__Enum StatusWhenLimited;

    float m_lastTimeExited;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CooldownDecorator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CooldownDecorator__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#endif
#undef IL2CPP_STRUCT_CooldownDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CooldownDecorator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CooldownDecorator__Fields_FWDDECL)
#include <Modloader/app/structs/CooldownDecorator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CooldownDecorator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
