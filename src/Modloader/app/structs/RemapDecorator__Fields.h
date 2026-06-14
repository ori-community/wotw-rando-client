#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemapDecorator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemapDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemapDecorator__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DecoratorNode__Fields.h>
#if defined(IL2CPP_STRUCT_DecoratorNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_RemapDecorator__Fields_DEFINED
struct RemapDecorator__Fields {
    struct DecoratorNode__Fields _;
    BehaviourStatus__Enum Success;

    BehaviourStatus__Enum Failure;

    BehaviourStatus__Enum Running;

    BehaviourStatus__Enum Blocking;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemapDecorator__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemapDecorator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RemapDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemapDecorator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemapDecorator__Fields_FWDDECL)
#include <Modloader/app/structs/RemapDecorator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemapDecorator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
