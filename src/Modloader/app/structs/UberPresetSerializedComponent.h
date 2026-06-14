#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetSerializedComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetSerializedComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetSerializedComponent_DEFINED)
#include <Modloader/app/structs/UberPresetSerializedComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UberPresetSerializedComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetSerializedComponent_DEFINED
struct UberPresetSerializedComponent__Class;
struct UberPresetSerializedComponent {
    struct UberPresetSerializedComponent__Class* klass;
    MonitorData* monitor;
    struct UberPresetSerializedComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPresetSerializedComponent_FWDDECL)
#define IL2CPP_STRUCT_UberPresetSerializedComponent_FWDDECL
#include <Modloader/app/structs/UberPresetSerializedComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPresetSerializedComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetSerializedComponent_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetSerializedComponent_FWDDECL)
#include <Modloader/app/structs/UberPresetSerializedComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetSerializedComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
