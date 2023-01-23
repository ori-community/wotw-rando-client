#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartEnter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartEnter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartEnter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CartEnter__Fields_DEFINED
struct Cart;
struct MoonTimeline;
struct CartEnter__Fields {
    struct MonoBehaviour__Fields _;
    struct Cart* Cart;
    struct MoonTimeline* EnterCarrySequence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartEnter__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartEnter__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CartEnter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartEnter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartEnter__Fields_FWDDECL)
#include <Modloader/app/structs/CartEnter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartEnter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
