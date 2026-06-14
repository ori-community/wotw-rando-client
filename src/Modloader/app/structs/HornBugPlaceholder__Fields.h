#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/BugHornEntity_BugHornType__Enum.h>
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_BugHornEntity_BugHornType__Enum_DEFINED)
#define IL2CPP_STRUCT_HornBugPlaceholder__Fields_DEFINED
struct HornBugPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    bool CanFlutter;
    BugHornEntity_BugHornType__Enum VariationType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugPlaceholder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HornBugPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
