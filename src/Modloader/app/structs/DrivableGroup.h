#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivableGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivableGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivableGroup_DEFINED)
#include <Modloader/app/structs/DrivableGroup__Fields.h>
#if defined(IL2CPP_STRUCT_DrivableGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_DrivableGroup_DEFINED
struct DrivableGroup__Class;
struct DrivableGroup {
    struct DrivableGroup__Class* klass;
    MonitorData* monitor;
    struct DrivableGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivableGroup_FWDDECL)
#define IL2CPP_STRUCT_DrivableGroup_FWDDECL
#include <Modloader/app/structs/DrivableGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_DrivableGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivableGroup_DEFINED) && !defined(IL2CPP_STRUCT_DrivableGroup_FWDDECL)
#include <Modloader/app/structs/DrivableGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivableGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
