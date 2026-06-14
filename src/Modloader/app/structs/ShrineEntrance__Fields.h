#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineEntrance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineEntrance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineEntrance__Fields_DEFINED)
#include <Modloader/app/structs/SavePedestal__Fields.h>
#if defined(IL2CPP_STRUCT_SavePedestal__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineEntrance__Fields_DEFINED
struct MessageProvider;
struct MessageBox;
struct ShrineEntrance__Fields {
    struct SavePedestal__Fields _;
    struct MessageProvider* SaveMessageProvider;
    struct MessageProvider* SaveAndTeleportMessageProvider;
    struct MessageBox* m_hintMessageBox;
    float m_defaultHudFadeTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShrineEntrance__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShrineEntrance__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ShrineEntrance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineEntrance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShrineEntrance__Fields_FWDDECL)
#include <Modloader/app/structs/ShrineEntrance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineEntrance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
