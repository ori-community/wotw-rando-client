#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_DEFINED)
#include <Modloader/app/structs/StatSetting_StatDisplayCategory__Enum.h>
#if defined(IL2CPP_STRUCT_StatSetting_StatDisplayCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_DEFINED
struct MessageProvider;
struct __declspec(align(8)) StatScreenDisplayFilter__Fields {
    StatSetting_StatDisplayCategory__Enum Filter;

    struct MessageProvider* FilterMessageProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatScreenDisplayFilter__Fields_FWDDECL)
#include <Modloader/app/structs/StatScreenDisplayFilter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatScreenDisplayFilter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
