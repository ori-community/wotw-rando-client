#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellDescription__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellDescription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellDescription__Fields_DEFINED
struct MessageProvider;
struct __declspec(align(8)) SpellDescription__Fields {
    struct MessageProvider* Name;
    struct MessageProvider* Description;
    struct MessageProvider* PickupMessage;
};
#endif
#if !defined(IL2CPP_STRUCT_SpellDescription__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellDescription__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SpellDescription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellDescription__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellDescription__Fields_FWDDECL)
#include <Modloader/app/structs/SpellDescription__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellDescription__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
