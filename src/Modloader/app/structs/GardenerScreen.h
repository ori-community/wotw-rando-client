#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GardenerScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GardenerScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerScreen_DEFINED)
#include <Modloader/app/structs/GardenerScreen__Fields.h>
#if defined(IL2CPP_STRUCT_GardenerScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_GardenerScreen_DEFINED
struct GardenerScreen__Class;
struct GardenerScreen {
    struct GardenerScreen__Class* klass;
    MonitorData* monitor;
    struct GardenerScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GardenerScreen_FWDDECL)
#define IL2CPP_STRUCT_GardenerScreen_FWDDECL
#include <Modloader/app/structs/GardenerScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_GardenerScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerScreen_DEFINED) && !defined(IL2CPP_STRUCT_GardenerScreen_FWDDECL)
#include <Modloader/app/structs/GardenerScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GardenerScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
