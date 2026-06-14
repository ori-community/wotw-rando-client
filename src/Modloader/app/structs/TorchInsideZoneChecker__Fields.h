#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_DEFINED)
#include <Modloader/app/structs/ObjectInsideZoneChecker__Fields.h>
#include <Modloader/app/structs/TorchInsideZoneChecker_FlameColorType__Enum.h>
#include <Modloader/app/structs/TorchInsideZoneChecker_TorchStateType__Enum.h>
#if defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_DEFINED) && defined(IL2CPP_STRUCT_TorchInsideZoneChecker_TorchStateType__Enum_DEFINED) && defined(IL2CPP_STRUCT_TorchInsideZoneChecker_FlameColorType__Enum_DEFINED)
#define IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_DEFINED
struct TorchInsideZoneChecker__Fields {
    struct ObjectInsideZoneChecker__Fields _;
    TorchInsideZoneChecker_TorchStateType__Enum TorchStateCheck;

    TorchInsideZoneChecker_FlameColorType__Enum FlameColorCheck;

    bool m_isInside;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_FWDDECL)
#define IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TorchInsideZoneChecker__Fields_FWDDECL)
#include <Modloader/app/structs/TorchInsideZoneChecker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TorchInsideZoneChecker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
