#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSoundBankData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSoundBankData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSoundBankData__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSoundBankData__Fields_DEFINED
struct List_1_Moon_Wwise_SoundBankEntry_;
struct SoundBankEntry__Array;
struct __declspec(align(8)) SceneSoundBankData__Fields {
    struct List_1_Moon_Wwise_SoundBankEntry_* SoundBanks;
    struct SoundBankEntry__Array* AdditionalSoundBanks;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneSoundBankData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneSoundBankData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Wwise_SoundBankEntry_.h>
#include <Modloader/app/structs/SoundBankEntry__Array.h>
#endif
#undef IL2CPP_STRUCT_SceneSoundBankData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSoundBankData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneSoundBankData__Fields_FWDDECL)
#include <Modloader/app/structs/SceneSoundBankData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSoundBankData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
