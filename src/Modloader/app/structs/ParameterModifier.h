#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterModifier_DEFINED)
#define IL2CPP_STRUCT_ParameterModifier_DEFINED
struct Boolean__Array;
struct ParameterModifier {
    struct Boolean__Array* _byRef;
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterModifier_FWDDECL)
#define IL2CPP_STRUCT_ParameterModifier_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#endif
#undef IL2CPP_STRUCT_ParameterModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterModifier_DEFINED) && !defined(IL2CPP_STRUCT_ParameterModifier_FWDDECL)
#include <Modloader/app/structs/ParameterModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
