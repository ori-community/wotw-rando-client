#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrefabPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrefabPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabPlaceholder_DEFINED)
#include <Modloader/app/structs/PrefabPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_PrefabPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_PrefabPlaceholder_DEFINED
struct PrefabPlaceholder__Class;
struct PrefabPlaceholder {
    struct PrefabPlaceholder__Class* klass;
    MonitorData* monitor;
    struct PrefabPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrefabPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_PrefabPlaceholder_FWDDECL
#include <Modloader/app/structs/PrefabPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_PrefabPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_PrefabPlaceholder_FWDDECL)
#include <Modloader/app/structs/PrefabPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrefabPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
