#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField_OnChangeEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField_OnChangeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_OnChangeEvent_DEFINED)
#include <Modloader/app/structs/InputField_OnChangeEvent__Fields.h>
#if defined(IL2CPP_STRUCT_InputField_OnChangeEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_InputField_OnChangeEvent_DEFINED
struct InputField_OnChangeEvent__Class;
struct InputField_OnChangeEvent {
    struct InputField_OnChangeEvent__Class* klass;
    MonitorData* monitor;
    struct InputField_OnChangeEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputField_OnChangeEvent_FWDDECL)
#define IL2CPP_STRUCT_InputField_OnChangeEvent_FWDDECL
#include <Modloader/app/structs/InputField_OnChangeEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_InputField_OnChangeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_OnChangeEvent_DEFINED) && !defined(IL2CPP_STRUCT_InputField_OnChangeEvent_FWDDECL)
#include <Modloader/app/structs/InputField_OnChangeEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField_OnChangeEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
