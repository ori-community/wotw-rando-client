#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderScreen_DEFINED)
#include <Modloader/app/structs/BuilderScreen__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderScreen_DEFINED
struct BuilderScreen__Class;
struct BuilderScreen {
    struct BuilderScreen__Class* klass;
    MonitorData* monitor;
    struct BuilderScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderScreen_FWDDECL)
#define IL2CPP_STRUCT_BuilderScreen_FWDDECL
#include <Modloader/app/structs/BuilderScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderScreen_DEFINED) && !defined(IL2CPP_STRUCT_BuilderScreen_FWDDECL)
#include <Modloader/app/structs/BuilderScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
