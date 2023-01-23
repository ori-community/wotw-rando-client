#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPrefabSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPrefabSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPrefabSet_DEFINED)
#include <Modloader/app/structs/SeinPrefabSet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPrefabSet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPrefabSet_DEFINED
struct SeinPrefabSet__Class;
struct SeinPrefabSet {
    struct SeinPrefabSet__Class* klass;
    MonitorData* monitor;
    struct SeinPrefabSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPrefabSet_FWDDECL)
#define IL2CPP_STRUCT_SeinPrefabSet_FWDDECL
#include <Modloader/app/structs/SeinPrefabSet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPrefabSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPrefabSet_DEFINED) && !defined(IL2CPP_STRUCT_SeinPrefabSet_FWDDECL)
#include <Modloader/app/structs/SeinPrefabSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPrefabSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
