#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationStateBase__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationStateBase__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationStateBase__Array_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationStateBase__Array_DEFINED
struct CharacterAnimationStateBase__Array__Class;
struct CharacterAnimationStateBase;
struct CharacterAnimationStateBase__Array {
    struct CharacterAnimationStateBase__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct CharacterAnimationStateBase* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationStateBase__Array_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationStateBase__Array_FWDDECL
#include <Modloader/app/structs/CharacterAnimationStateBase.h>
#include <Modloader/app/structs/CharacterAnimationStateBase__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationStateBase__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationStateBase__Array_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationStateBase__Array_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationStateBase__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationStateBase__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
