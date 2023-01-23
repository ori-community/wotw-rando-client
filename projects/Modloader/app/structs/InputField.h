#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_DEFINED)
#include <Modloader/app/structs/InputField__Fields.h>
#if defined(IL2CPP_STRUCT_InputField__Fields_DEFINED)
#define IL2CPP_STRUCT_InputField_DEFINED
struct InputField__Class;
struct InputField {
    struct InputField__Class* klass;
    MonitorData* monitor;
    struct InputField__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputField_FWDDECL)
#define IL2CPP_STRUCT_InputField_FWDDECL
#include <Modloader/app/structs/InputField__Class.h>
#endif
#undef IL2CPP_STRUCT_InputField_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_DEFINED) && !defined(IL2CPP_STRUCT_InputField_FWDDECL)
#include <Modloader/app/structs/InputField.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
