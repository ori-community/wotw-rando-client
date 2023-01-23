#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioStateZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioStateZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioStateZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AudioStateZone__Fields_DEFINED
struct State;
struct Switch_1;
struct Trigger;
struct List_1_AmbienceZone_WiseAuxSend_;
struct Polygon_1;
struct AudioStateZone__Fields {
    struct MonoBehaviour__Fields _;
    bool _Activated_k__BackingField;
    struct State* StateOnEnter;
    struct State* StateOnExit;
    struct Switch_1* SwitchOnEnter;
    struct Switch_1* SwitchOnExit;
    struct Trigger* TriggerOnEnter;
    struct Trigger* TriggerOnExit;
    struct List_1_AmbienceZone_WiseAuxSend_* AuxSends;
    struct Polygon_1* Polygon;
    struct Rect Bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioStateZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioStateZone__Fields_FWDDECL
#include <Modloader/app/structs/List_1_AmbienceZone_WiseAuxSend_.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_AudioStateZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioStateZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioStateZone__Fields_FWDDECL)
#include <Modloader/app/structs/AudioStateZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioStateZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
