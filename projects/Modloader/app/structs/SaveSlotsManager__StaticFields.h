#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotsManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotsManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotsManager__StaticFields_DEFINED
struct SaveSlotsManager;
struct Action;
struct SaveSlotsManager__StaticFields {
    struct SaveSlotsManager* Instance;
    struct Action* SlotsPrepared;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotsManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotsManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SaveSlotsManager.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotsManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotsManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/SaveSlotsManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotsManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
