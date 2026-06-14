#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_DEFINED
struct MoonReference_1_MovingPlatformController_;
struct SpiderBossBottomDamageDealerEnabler__Fields {
    struct ActionMethod__Fields _;
    struct MoonReference_1_MovingPlatformController_* SpiderPlatformController;
    bool EnableBottomDamageDealers;
    bool DisableBottomDamageDealers;
    bool EnableCollisions;
    bool DisableCollisions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_MovingPlatformController_.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossBottomDamageDealerEnabler__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossBottomDamageDealerEnabler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossBottomDamageDealerEnabler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
