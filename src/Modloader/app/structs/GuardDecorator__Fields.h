#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuardDecorator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuardDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuardDecorator__Fields_DEFINED)
#include <Modloader/app/structs/DecoratorNode__Fields.h>
#include <Modloader/app/structs/GuardDecorator_GuardModeType__Enum.h>
#if defined(IL2CPP_STRUCT_DecoratorNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_GuardDecorator_GuardModeType__Enum_DEFINED)
#define IL2CPP_STRUCT_GuardDecorator__Fields_DEFINED
struct MoonString;
struct Component_1;
struct GuardDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct MoonString* Token;
    struct Component_1* m_ownerAgent;
    GuardDecorator_GuardModeType__Enum IfGuarded;

    bool m_isGuarding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuardDecorator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GuardDecorator__Fields_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/MoonString.h>
#endif
#undef IL2CPP_STRUCT_GuardDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuardDecorator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GuardDecorator__Fields_FWDDECL)
#include <Modloader/app/structs/GuardDecorator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuardDecorator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
