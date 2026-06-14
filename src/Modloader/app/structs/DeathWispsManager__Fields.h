#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathWispsManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathWispsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWispsManager__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_DeathWispsManager__Fields_DEFINED
struct GameObject;
struct MessageProvider;
struct Dictionary_2_DeathInformation_DeathWisp_;
struct HashSet_1_DeathWisp_;
struct ActionMethod;
struct DeathInformation;
struct DeathWispsManager__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Wisp;
    struct MessageProvider* WispMessage;
    struct GameObject* WispIcon;
    struct Dictionary_2_DeathInformation_DeathWisp_* m_wisps;
    struct Bounds m_lastCameraBounds;
    struct HashSet_1_DeathWisp_* m_leftOvers;
    struct ActionMethod* CollectWispAction;
    struct DeathInformation* Collected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathWispsManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeathWispsManager__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/DeathInformation.h>
#include <Modloader/app/structs/Dictionary_2_DeathInformation_DeathWisp_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_DeathWisp_.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_DeathWispsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWispsManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeathWispsManager__Fields_FWDDECL)
#include <Modloader/app/structs/DeathWispsManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathWispsManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
