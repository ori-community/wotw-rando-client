#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneController_ButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneController_ButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController_ButtonInput_DEFINED)
#include <Modloader/app/structs/XboxOneController_ButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneController_ButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneController_ButtonInput_DEFINED
struct XboxOneController_ButtonInput__Class;
struct XboxOneController_ButtonInput {
    struct XboxOneController_ButtonInput__Class* klass;
    MonitorData* monitor;
    struct XboxOneController_ButtonInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneController_ButtonInput_FWDDECL)
#define IL2CPP_STRUCT_XboxOneController_ButtonInput_FWDDECL
#include <Modloader/app/structs/XboxOneController_ButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneController_ButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController_ButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneController_ButtonInput_FWDDECL)
#include <Modloader/app/structs/XboxOneController_ButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneController_ButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
