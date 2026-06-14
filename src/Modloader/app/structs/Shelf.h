#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shelf_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shelf_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shelf_DEFINED)
#include <Modloader/app/structs/Shelf__Fields.h>
#if defined(IL2CPP_STRUCT_Shelf__Fields_DEFINED)
#define IL2CPP_STRUCT_Shelf_DEFINED
struct Shelf__Class;
struct Shelf {
    struct Shelf__Class* klass;
    MonitorData* monitor;
    struct Shelf__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Shelf_FWDDECL)
#define IL2CPP_STRUCT_Shelf_FWDDECL
#include <Modloader/app/structs/Shelf__Class.h>
#endif
#undef IL2CPP_STRUCT_Shelf_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shelf_DEFINED) && !defined(IL2CPP_STRUCT_Shelf_FWDDECL)
#include <Modloader/app/structs/Shelf.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shelf.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
