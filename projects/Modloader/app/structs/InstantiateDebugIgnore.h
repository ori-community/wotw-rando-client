#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateDebugIgnore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateDebugIgnore_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugIgnore_DEFINED)
#include <Modloader/app/structs/InstantiateDebugIgnore__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiateDebugIgnore_DEFINED
struct InstantiateDebugIgnore__Class;
struct InstantiateDebugIgnore {
    struct InstantiateDebugIgnore__Class* klass;
    MonitorData* monitor;
    struct InstantiateDebugIgnore__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateDebugIgnore_FWDDECL)
#define IL2CPP_STRUCT_InstantiateDebugIgnore_FWDDECL
#include <Modloader/app/structs/InstantiateDebugIgnore__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateDebugIgnore_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugIgnore_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateDebugIgnore_FWDDECL)
#include <Modloader/app/structs/InstantiateDebugIgnore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateDebugIgnore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
