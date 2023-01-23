#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateFloat__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateFloat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateFloat__Fields_DEFINED
struct SerializedFloatUberState;
struct __declspec(align(8)) DesiredUberStateFloat__Fields {
    struct SerializedFloatUberState* Descriptor;
    float DesiredValue;
    float m_previousState;
};
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateFloat__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateFloat__Fields_FWDDECL
#include <Modloader/app/structs/SerializedFloatUberState.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateFloat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateFloat__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateFloat__Fields_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateFloat__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateFloat__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
