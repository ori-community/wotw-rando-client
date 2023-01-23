#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateMatcher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateMatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateMatcher__Fields_DEFINED)
#include <Modloader/app/structs/UberStateMatcher_UberStateMatcherTypeIds__Enum.h>
#if defined(IL2CPP_STRUCT_UberStateMatcher_UberStateMatcherTypeIds__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateMatcher__Fields_DEFINED
struct GenericDataContainer;
struct __declspec(align(8)) UberStateMatcher__Fields {
    struct GenericDataContainer* Data;
    UberStateMatcher_UberStateMatcherTypeIds__Enum m_stateMatcherId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateMatcher__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateMatcher__Fields_FWDDECL
#include <Modloader/app/structs/GenericDataContainer.h>
#endif
#undef IL2CPP_STRUCT_UberStateMatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateMatcher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateMatcher__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateMatcher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateMatcher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
