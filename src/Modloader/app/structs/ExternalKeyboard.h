#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalKeyboard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalKeyboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalKeyboard_DEFINED)
#include <Modloader/app/structs/ExternalKeyboard__Fields.h>
#if defined(IL2CPP_STRUCT_ExternalKeyboard__Fields_DEFINED)
#define IL2CPP_STRUCT_ExternalKeyboard_DEFINED
struct ExternalKeyboard__Class;
struct ExternalKeyboard {
    struct ExternalKeyboard__Class* klass;
    MonitorData* monitor;
    struct ExternalKeyboard__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalKeyboard_FWDDECL)
#define IL2CPP_STRUCT_ExternalKeyboard_FWDDECL
#include <Modloader/app/structs/ExternalKeyboard__Class.h>
#endif
#undef IL2CPP_STRUCT_ExternalKeyboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalKeyboard_DEFINED) && !defined(IL2CPP_STRUCT_ExternalKeyboard_FWDDECL)
#include <Modloader/app/structs/ExternalKeyboard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalKeyboard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
