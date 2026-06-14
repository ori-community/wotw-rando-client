#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMap_DEFINED)
#include <Modloader/app/structs/ObjectMap__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectMap_DEFINED
struct ObjectMap__Class;
struct ObjectMap {
    struct ObjectMap__Class* klass;
    MonitorData* monitor;
    struct ObjectMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectMap_FWDDECL)
#define IL2CPP_STRUCT_ObjectMap_FWDDECL
#include <Modloader/app/structs/ObjectMap__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMap_DEFINED) && !defined(IL2CPP_STRUCT_ObjectMap_FWDDECL)
#include <Modloader/app/structs/ObjectMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
