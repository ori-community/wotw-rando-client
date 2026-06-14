#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogPlaceholder__Fields_DEFINED
struct FrogGroup;
struct FrogPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct FrogGroup* Group;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/FrogGroup.h>
#endif
#undef IL2CPP_STRUCT_FrogPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/FrogPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
