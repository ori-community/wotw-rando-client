#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestIndicator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestIndicator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIndicator__Fields_DEFINED)
#include <Modloader/app/structs/TargetIndicator__Fields.h>
#if defined(IL2CPP_STRUCT_TargetIndicator__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestIndicator__Fields_DEFINED
struct QuestIndicator__Fields {
    struct TargetIndicator__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestIndicator__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestIndicator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_QuestIndicator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIndicator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestIndicator__Fields_FWDDECL)
#include <Modloader/app/structs/QuestIndicator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestIndicator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
