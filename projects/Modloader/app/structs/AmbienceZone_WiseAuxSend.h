#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_DEFINED)
#define IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_DEFINED
struct AuxBus;
struct AmbienceZone_WiseAuxSend {
    struct AuxBus* AuxBus;
    float Send;
};
#endif
#if !defined(IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_FWDDECL)
#define IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_FWDDECL
#include <Modloader/app/structs/AuxBus.h>
#endif
#undef IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_DEFINED) && !defined(IL2CPP_STRUCT_AmbienceZone_WiseAuxSend_FWDDECL)
#include <Modloader/app/structs/AmbienceZone_WiseAuxSend.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbienceZone_WiseAuxSend.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
