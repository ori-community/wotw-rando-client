#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleGroup_DEFINED)
#include <Modloader/app/structs/ToggleGroup__Fields.h>
#if defined(IL2CPP_STRUCT_ToggleGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_ToggleGroup_DEFINED
struct ToggleGroup__Class;
struct ToggleGroup {
    struct ToggleGroup__Class* klass;
    MonitorData* monitor;
    struct ToggleGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleGroup_FWDDECL)
#define IL2CPP_STRUCT_ToggleGroup_FWDDECL
#include <Modloader/app/structs/ToggleGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_ToggleGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleGroup_DEFINED) && !defined(IL2CPP_STRUCT_ToggleGroup_FWDDECL)
#include <Modloader/app/structs/ToggleGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
