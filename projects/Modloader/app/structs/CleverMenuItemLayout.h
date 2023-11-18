#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItemLayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItemLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemLayout_DEFINED)
#include <Modloader/app/structs/CleverMenuItemLayout__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuItemLayout__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItemLayout_DEFINED
struct CleverMenuItemLayout__Class;
struct CleverMenuItemLayout {
    struct CleverMenuItemLayout__Class* klass;
    MonitorData* monitor;
    struct CleverMenuItemLayout__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItemLayout_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItemLayout_FWDDECL
#include <Modloader/app/structs/CleverMenuItemLayout__Class.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItemLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemLayout_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItemLayout_FWDDECL)
#include <Modloader/app/structs/CleverMenuItemLayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItemLayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
