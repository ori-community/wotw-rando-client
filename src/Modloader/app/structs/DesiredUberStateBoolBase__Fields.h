#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_DEFINED
struct SerializedBooleanUberState;
struct __declspec(align(8)) DesiredUberStateBoolBase__Fields {
    struct SerializedBooleanUberState* Descriptor;
    bool m_previousState;
};
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_FWDDECL
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateBoolBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateBoolBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
