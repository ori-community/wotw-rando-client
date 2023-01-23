#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDrivableGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDrivableGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDrivableGroup_DEFINED)
#define IL2CPP_STRUCT_IDrivableGroup_DEFINED
struct IDrivableGroup__Class;
struct IDrivableGroup {
    struct IDrivableGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDrivableGroup_FWDDECL)
#define IL2CPP_STRUCT_IDrivableGroup_FWDDECL
#include <Modloader/app/structs/IDrivableGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_IDrivableGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDrivableGroup_DEFINED) && !defined(IL2CPP_STRUCT_IDrivableGroup_FWDDECL)
#include <Modloader/app/structs/IDrivableGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDrivableGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
