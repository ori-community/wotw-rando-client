#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnSceneStartRunAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnSceneStartRunAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSceneStartRunAction__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_OnSceneStartRunAction__Fields_DEFINED
struct ActionMethod;
struct Condition_1;
struct OnSceneStartRunAction__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* ActionToRun;
    struct Condition_1* Condition;
    bool TriggerOnce;
    bool m_isTriggered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnSceneStartRunAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_OnSceneStartRunAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_OnSceneStartRunAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSceneStartRunAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OnSceneStartRunAction__Fields_FWDDECL)
#include <Modloader/app/structs/OnSceneStartRunAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnSceneStartRunAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
