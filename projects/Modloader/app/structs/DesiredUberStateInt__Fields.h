#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateInt__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateInt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateInt__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateInt__Fields_DEFINED
struct SerializedIntUberState;
struct __declspec(align(8)) DesiredUberStateInt__Fields {
    struct SerializedIntUberState* Descriptor;
    int32_t DesiredValue;
    int32_t m_previousState;
};
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateInt__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateInt__Fields_FWDDECL
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateInt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateInt__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateInt__Fields_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateInt__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateInt__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
