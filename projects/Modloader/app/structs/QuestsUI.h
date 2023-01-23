#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestsUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsUI_DEFINED)
#include <Modloader/app/structs/QuestsUI__Fields.h>
#if defined(IL2CPP_STRUCT_QuestsUI__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestsUI_DEFINED
struct QuestsUI__Class;
struct QuestsUI {
    struct QuestsUI__Class* klass;
    MonitorData* monitor;
    struct QuestsUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestsUI_FWDDECL)
#define IL2CPP_STRUCT_QuestsUI_FWDDECL
#include <Modloader/app/structs/QuestsUI__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsUI_DEFINED) && !defined(IL2CPP_STRUCT_QuestsUI_FWDDECL)
#include <Modloader/app/structs/QuestsUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestsUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
