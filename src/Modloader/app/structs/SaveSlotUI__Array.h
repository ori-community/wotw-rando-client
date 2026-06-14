#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotUI__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotUI__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotUI__Array_DEFINED)
#define IL2CPP_STRUCT_SaveSlotUI__Array_DEFINED
struct SaveSlotUI__Array__Class;
struct SaveSlotUI;
struct SaveSlotUI__Array {
    struct SaveSlotUI__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SaveSlotUI* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotUI__Array_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotUI__Array_FWDDECL
#include <Modloader/app/structs/SaveSlotUI.h>
#include <Modloader/app/structs/SaveSlotUI__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotUI__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotUI__Array_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotUI__Array_FWDDECL)
#include <Modloader/app/structs/SaveSlotUI__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotUI__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
