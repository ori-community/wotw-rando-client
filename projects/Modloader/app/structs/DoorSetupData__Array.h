#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorSetupData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorSetupData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupData__Array_DEFINED)
#define IL2CPP_STRUCT_DoorSetupData__Array_DEFINED
struct DoorSetupData__Array__Class;
struct DoorSetupData;
struct DoorSetupData__Array {
    struct DoorSetupData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct DoorSetupData* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_DoorSetupData__Array_FWDDECL)
#define IL2CPP_STRUCT_DoorSetupData__Array_FWDDECL
#include <Modloader/app/structs/DoorSetupData.h>
#include <Modloader/app/structs/DoorSetupData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorSetupData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupData__Array_DEFINED) && !defined(IL2CPP_STRUCT_DoorSetupData__Array_FWDDECL)
#include <Modloader/app/structs/DoorSetupData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorSetupData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
