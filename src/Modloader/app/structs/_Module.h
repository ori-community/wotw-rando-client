#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Module_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Module_INITIALIZING
#if !defined(IL2CPP_STRUCT__Module_DEFINED)
#define IL2CPP_STRUCT__Module_DEFINED
struct _Module__Class;
struct _Module {
    struct _Module__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Module_FWDDECL)
#define IL2CPP_STRUCT__Module_FWDDECL
#include <Modloader/app/structs/_Module__Class.h>
#endif
#undef IL2CPP_STRUCT__Module_INITIALIZING
#if !defined(IL2CPP_STRUCT__Module_DEFINED) && !defined(IL2CPP_STRUCT__Module_FWDDECL)
#include <Modloader/app/structs/_Module.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Module.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
