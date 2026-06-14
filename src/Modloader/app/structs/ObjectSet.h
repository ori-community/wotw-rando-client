#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectSet_DEFINED)
#include <Modloader/app/structs/ObjectSet__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectSet__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectSet_DEFINED
struct ObjectSet__Class;
struct ObjectSet {
    struct ObjectSet__Class* klass;
    MonitorData* monitor;
    struct ObjectSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectSet_FWDDECL)
#define IL2CPP_STRUCT_ObjectSet_FWDDECL
#include <Modloader/app/structs/ObjectSet__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectSet_DEFINED) && !defined(IL2CPP_STRUCT_ObjectSet_FWDDECL)
#include <Modloader/app/structs/ObjectSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
