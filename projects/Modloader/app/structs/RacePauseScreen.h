#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacePauseScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacePauseScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePauseScreen_DEFINED)
#include <Modloader/app/structs/RacePauseScreen__Fields.h>
#if defined(IL2CPP_STRUCT_RacePauseScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_RacePauseScreen_DEFINED
struct RacePauseScreen__Class;
struct RacePauseScreen {
    struct RacePauseScreen__Class* klass;
    MonitorData* monitor;
    struct RacePauseScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RacePauseScreen_FWDDECL)
#define IL2CPP_STRUCT_RacePauseScreen_FWDDECL
#include <Modloader/app/structs/RacePauseScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_RacePauseScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePauseScreen_DEFINED) && !defined(IL2CPP_STRUCT_RacePauseScreen_FWDDECL)
#include <Modloader/app/structs/RacePauseScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacePauseScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
