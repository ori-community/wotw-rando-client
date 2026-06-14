#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField_OnValidateInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField_OnValidateInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_OnValidateInput_DEFINED)
#include <Modloader/app/structs/InputField_OnValidateInput__Fields.h>
#if defined(IL2CPP_STRUCT_InputField_OnValidateInput__Fields_DEFINED)
#define IL2CPP_STRUCT_InputField_OnValidateInput_DEFINED
struct InputField_OnValidateInput__Class;
struct InputField_OnValidateInput {
    struct InputField_OnValidateInput__Class* klass;
    MonitorData* monitor;
    struct InputField_OnValidateInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputField_OnValidateInput_FWDDECL)
#define IL2CPP_STRUCT_InputField_OnValidateInput_FWDDECL
#include <Modloader/app/structs/InputField_OnValidateInput__Class.h>
#endif
#undef IL2CPP_STRUCT_InputField_OnValidateInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_OnValidateInput_DEFINED) && !defined(IL2CPP_STRUCT_InputField_OnValidateInput_FWDDECL)
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
