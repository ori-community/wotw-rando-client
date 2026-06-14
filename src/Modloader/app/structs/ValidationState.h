#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationState_DEFINED)
#include <Modloader/app/structs/ValidationState__Fields.h>
#if defined(IL2CPP_STRUCT_ValidationState__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidationState_DEFINED
struct ValidationState__Class;
struct ValidationState {
    struct ValidationState__Class* klass;
    MonitorData* monitor;
    struct ValidationState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationState_FWDDECL)
#define IL2CPP_STRUCT_ValidationState_FWDDECL
#include <Modloader/app/structs/ValidationState__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationState_DEFINED) && !defined(IL2CPP_STRUCT_ValidationState_FWDDECL)
#include <Modloader/app/structs/ValidationState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
