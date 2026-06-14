#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SavePedestalUberState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SavePedestalUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalUberState__Fields_DEFINED)
#include <Modloader/app/structs/ObjectUberState__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_SavePedestalUberState__Fields_DEFINED
struct SavePedestalUberState_PedestalState;
struct UberStateGroup;
struct UberID;
struct SavePedestalUberState__Fields {
    struct ObjectUberState__Fields _;
    struct SavePedestalUberState_PedestalState* DefaultState;
    struct UberStateGroup* Group;
    struct UberID* m_cachedGroupID;
    bool m_isGroupIDCached;
    struct SavePedestalUberState_PedestalState* EditorOnlyDebugState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SavePedestalUberState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SavePedestalUberState__Fields_FWDDECL
#include <Modloader/app/structs/SavePedestalUberState_PedestalState.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateGroup.h>
#endif
#undef IL2CPP_STRUCT_SavePedestalUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalUberState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SavePedestalUberState__Fields_FWDDECL)
#include <Modloader/app/structs/SavePedestalUberState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SavePedestalUberState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
