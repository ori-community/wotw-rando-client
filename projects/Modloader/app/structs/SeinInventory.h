#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInventory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInventory_DEFINED)
#include <Modloader/app/structs/SeinInventory__Fields.h>
#if defined(IL2CPP_STRUCT_SeinInventory__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInventory_DEFINED
struct SeinInventory__Class;
struct SeinInventory {
    struct SeinInventory__Class* klass;
    MonitorData* monitor;
    struct SeinInventory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInventory_FWDDECL)
#define IL2CPP_STRUCT_SeinInventory_FWDDECL
#include <Modloader/app/structs/SeinInventory__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInventory_DEFINED) && !defined(IL2CPP_STRUCT_SeinInventory_FWDDECL)
#include <Modloader/app/structs/SeinInventory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInventory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
