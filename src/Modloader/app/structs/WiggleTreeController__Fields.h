#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WiggleTreeController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WiggleTreeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WiggleTreeController__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_WiggleTreeController__Fields_DEFINED
struct List_1_WiggleTreeController_WiggleSettings_;
struct ActionMethod;
struct Transform;
struct WiggleTreeController__Fields {
    struct SaveSerialize__Fields _;
    struct List_1_WiggleTreeController_WiggleSettings_* WiggleInformation;
    struct ActionMethod* OnWiggleSequenceEnded;
    struct Transform* Target;
    int32_t m_wiggleDataIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WiggleTreeController__Fields_FWDDECL)
#define IL2CPP_STRUCT_WiggleTreeController__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/List_1_WiggleTreeController_WiggleSettings_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WiggleTreeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WiggleTreeController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WiggleTreeController__Fields_FWDDECL)
#include <Modloader/app/structs/WiggleTreeController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WiggleTreeController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
