#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMap_DEFINED)
#include <Modloader/app/structs/ListMap__Fields.h>
#if defined(IL2CPP_STRUCT_ListMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ListMap_DEFINED
struct ListMap__Class;
struct ListMap {
    struct ListMap__Class* klass;
    MonitorData* monitor;
    struct ListMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListMap_FWDDECL)
#define IL2CPP_STRUCT_ListMap_FWDDECL
#include <Modloader/app/structs/ListMap__Class.h>
#endif
#undef IL2CPP_STRUCT_ListMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMap_DEFINED) && !defined(IL2CPP_STRUCT_ListMap_FWDDECL)
#include <Modloader/app/structs/ListMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
