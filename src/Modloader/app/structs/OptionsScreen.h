#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionsScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreen_DEFINED)
#include <Modloader/app/structs/OptionsScreen__Fields.h>
#if defined(IL2CPP_STRUCT_OptionsScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_OptionsScreen_DEFINED
struct OptionsScreen__Class;
struct OptionsScreen {
    struct OptionsScreen__Class* klass;
    MonitorData* monitor;
    struct OptionsScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionsScreen_FWDDECL)
#define IL2CPP_STRUCT_OptionsScreen_FWDDECL
#include <Modloader/app/structs/OptionsScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_OptionsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreen_DEFINED) && !defined(IL2CPP_STRUCT_OptionsScreen_FWDDECL)
#include <Modloader/app/structs/OptionsScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionsScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
