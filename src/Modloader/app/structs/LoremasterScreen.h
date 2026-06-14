#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoremasterScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoremasterScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterScreen_DEFINED)
#include <Modloader/app/structs/LoremasterScreen__Fields.h>
#if defined(IL2CPP_STRUCT_LoremasterScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_LoremasterScreen_DEFINED
struct LoremasterScreen__Class;
struct LoremasterScreen {
    struct LoremasterScreen__Class* klass;
    MonitorData* monitor;
    struct LoremasterScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoremasterScreen_FWDDECL)
#define IL2CPP_STRUCT_LoremasterScreen_FWDDECL
#include <Modloader/app/structs/LoremasterScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_LoremasterScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterScreen_DEFINED) && !defined(IL2CPP_STRUCT_LoremasterScreen_FWDDECL)
#include <Modloader/app/structs/LoremasterScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoremasterScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
