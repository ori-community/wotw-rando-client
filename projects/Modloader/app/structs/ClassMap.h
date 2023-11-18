#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClassMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClassMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassMap_DEFINED)
#include <Modloader/app/structs/ClassMap__Fields.h>
#if defined(IL2CPP_STRUCT_ClassMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ClassMap_DEFINED
struct ClassMap__Class;
struct ClassMap {
    struct ClassMap__Class* klass;
    MonitorData* monitor;
    struct ClassMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClassMap_FWDDECL)
#define IL2CPP_STRUCT_ClassMap_FWDDECL
#include <Modloader/app/structs/ClassMap__Class.h>
#endif
#undef IL2CPP_STRUCT_ClassMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClassMap_DEFINED) && !defined(IL2CPP_STRUCT_ClassMap_FWDDECL)
#include <Modloader/app/structs/ClassMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClassMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
