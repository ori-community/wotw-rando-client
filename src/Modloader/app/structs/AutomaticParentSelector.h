#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutomaticParentSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutomaticParentSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomaticParentSelector_DEFINED)
#include <Modloader/app/structs/AutomaticParentSelector__Fields.h>
#if defined(IL2CPP_STRUCT_AutomaticParentSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_AutomaticParentSelector_DEFINED
struct AutomaticParentSelector__Class;
struct AutomaticParentSelector {
    struct AutomaticParentSelector__Class* klass;
    MonitorData* monitor;
    struct AutomaticParentSelector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutomaticParentSelector_FWDDECL)
#define IL2CPP_STRUCT_AutomaticParentSelector_FWDDECL
#include <Modloader/app/structs/AutomaticParentSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_AutomaticParentSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomaticParentSelector_DEFINED) && !defined(IL2CPP_STRUCT_AutomaticParentSelector_FWDDECL)
#include <Modloader/app/structs/AutomaticParentSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutomaticParentSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
