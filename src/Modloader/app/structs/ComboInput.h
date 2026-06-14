#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboInput_DEFINED)
#include <Modloader/app/structs/ComboInput__Fields.h>
#if defined(IL2CPP_STRUCT_ComboInput__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboInput_DEFINED
struct ComboInput__Class;
struct ComboInput {
    struct ComboInput__Class* klass;
    MonitorData* monitor;
    struct ComboInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboInput_FWDDECL)
#define IL2CPP_STRUCT_ComboInput_FWDDECL
#include <Modloader/app/structs/ComboInput__Class.h>
#endif
#undef IL2CPP_STRUCT_ComboInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboInput_DEFINED) && !defined(IL2CPP_STRUCT_ComboInput_FWDDECL)
#include <Modloader/app/structs/ComboInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
