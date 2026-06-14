#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateFovModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateFovModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateFovModifier_DEFINED)
#include <Modloader/app/structs/SeinEvent__Enum.h>
#if defined(IL2CPP_STRUCT_SeinEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_StateFovModifier_DEFINED
struct StateFovModifier {
    SeinEvent__Enum State;

    float Offset;
    float TransitionTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateFovModifier_FWDDECL)
#define IL2CPP_STRUCT_StateFovModifier_FWDDECL
#endif
#undef IL2CPP_STRUCT_StateFovModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateFovModifier_DEFINED) && !defined(IL2CPP_STRUCT_StateFovModifier_FWDDECL)
#include <Modloader/app/structs/StateFovModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateFovModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
