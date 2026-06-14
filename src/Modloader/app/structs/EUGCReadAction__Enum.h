#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EUGCReadAction__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EUGCReadAction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUGCReadAction__Enum_DEFINED)
#define IL2CPP_STRUCT_EUGCReadAction__Enum_DEFINED
enum class EUGCReadAction__Enum : int32_t {
    k_EUGCRead_ContinueReadingUntilFinished = 0x00000000,
    k_EUGCRead_ContinueReading = 0x00000001,
    k_EUGCRead_Close = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_EUGCReadAction__Enum_FWDDECL)
#define IL2CPP_STRUCT_EUGCReadAction__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EUGCReadAction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUGCReadAction__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EUGCReadAction__Enum_FWDDECL)
#include <Modloader/app/structs/EUGCReadAction__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EUGCReadAction__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
