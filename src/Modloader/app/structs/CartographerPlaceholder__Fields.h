#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_CartographerPlaceholder__Fields_DEFINED
struct Blackboard;
struct CartographerPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    struct Blackboard* Blackboard;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartographerPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/Blackboard.h>
#endif
#undef IL2CPP_STRUCT_CartographerPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartographerPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/CartographerPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
