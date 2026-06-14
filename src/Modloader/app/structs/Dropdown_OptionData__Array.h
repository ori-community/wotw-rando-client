#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown_OptionData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown_OptionData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_OptionData__Array_DEFINED)
#define IL2CPP_STRUCT_Dropdown_OptionData__Array_DEFINED
struct Dropdown_OptionData__Array__Class;
struct Dropdown_OptionData;
struct Dropdown_OptionData__Array {
    struct Dropdown_OptionData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Dropdown_OptionData* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Dropdown_OptionData__Array_FWDDECL)
#define IL2CPP_STRUCT_Dropdown_OptionData__Array_FWDDECL
#include <Modloader/app/structs/Dropdown_OptionData.h>
#include <Modloader/app/structs/Dropdown_OptionData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Dropdown_OptionData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_OptionData__Array_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown_OptionData__Array_FWDDECL)
#include <Modloader/app/structs/Dropdown_OptionData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown_OptionData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
