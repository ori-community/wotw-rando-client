#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListOfCollidedObjects_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListOfCollidedObjects_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListOfCollidedObjects_DEFINED)
#include <Modloader/app/structs/ListOfCollidedObjects__Fields.h>
#if defined(IL2CPP_STRUCT_ListOfCollidedObjects__Fields_DEFINED)
#define IL2CPP_STRUCT_ListOfCollidedObjects_DEFINED
struct ListOfCollidedObjects__Class;
struct ListOfCollidedObjects {
    struct ListOfCollidedObjects__Class* klass;
    MonitorData* monitor;
    struct ListOfCollidedObjects__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListOfCollidedObjects_FWDDECL)
#define IL2CPP_STRUCT_ListOfCollidedObjects_FWDDECL
#include <Modloader/app/structs/ListOfCollidedObjects__Class.h>
#endif
#undef IL2CPP_STRUCT_ListOfCollidedObjects_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListOfCollidedObjects_DEFINED) && !defined(IL2CPP_STRUCT_ListOfCollidedObjects_FWDDECL)
#include <Modloader/app/structs/ListOfCollidedObjects.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListOfCollidedObjects.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
