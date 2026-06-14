#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Portal_AssistConfig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Portal_AssistConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig__Fields_DEFINED)
#include <Modloader/app/structs/Portal_AssistConfig_AssistTarget__Enum.h>
#if defined(IL2CPP_STRUCT_Portal_AssistConfig_AssistTarget__Enum_DEFINED)
#define IL2CPP_STRUCT_Portal_AssistConfig__Fields_DEFINED
struct __declspec(align(8)) Portal_AssistConfig__Fields {
    Portal_AssistConfig_AssistTarget__Enum Category;

    bool CenterPositionOnExit;
    bool AlignVelocityOnExit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig__Fields_FWDDECL)
#define IL2CPP_STRUCT_Portal_AssistConfig__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Portal_AssistConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Portal_AssistConfig__Fields_FWDDECL)
#include <Modloader/app/structs/Portal_AssistConfig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Portal_AssistConfig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
