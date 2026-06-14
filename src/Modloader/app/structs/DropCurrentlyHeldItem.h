#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropCurrentlyHeldItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropCurrentlyHeldItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropCurrentlyHeldItem_DEFINED)
#include <Modloader/app/structs/DropCurrentlyHeldItem__Fields.h>
#if defined(IL2CPP_STRUCT_DropCurrentlyHeldItem__Fields_DEFINED)
#define IL2CPP_STRUCT_DropCurrentlyHeldItem_DEFINED
struct DropCurrentlyHeldItem__Class;
struct DropCurrentlyHeldItem {
    struct DropCurrentlyHeldItem__Class* klass;
    MonitorData* monitor;
    struct DropCurrentlyHeldItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropCurrentlyHeldItem_FWDDECL)
#define IL2CPP_STRUCT_DropCurrentlyHeldItem_FWDDECL
#include <Modloader/app/structs/DropCurrentlyHeldItem__Class.h>
#endif
#undef IL2CPP_STRUCT_DropCurrentlyHeldItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropCurrentlyHeldItem_DEFINED) && !defined(IL2CPP_STRUCT_DropCurrentlyHeldItem_FWDDECL)
#include <Modloader/app/structs/DropCurrentlyHeldItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropCurrentlyHeldItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
