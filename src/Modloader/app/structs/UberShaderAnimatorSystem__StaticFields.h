#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_DEFINED
struct UberShaderAnimatorSystem;
struct UberShaderAnimatorStrategyBase;
struct UberShaderAnimatorSystem__StaticFields {
    struct UberShaderAnimatorSystem* m_instance;
    struct UberShaderAnimatorStrategyBase* m_strat;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/UberShaderAnimatorStrategyBase.h>
#include <Modloader/app/structs/UberShaderAnimatorSystem.h>
#endif
#undef IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAnimatorSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderAnimatorSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAnimatorSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
