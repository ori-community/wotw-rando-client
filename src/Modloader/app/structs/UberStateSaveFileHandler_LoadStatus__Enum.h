#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_DEFINED
enum class UberStateSaveFileHandler_LoadStatus__Enum : int32_t {
    LOAD_SUCCESSFUL = 0x00000000,
    UNSUPPORTED_OLD_SAVE_FILE = 0x00000001,
    SAVE_FILE_DOESNT_EXIST = 0x00000002,
    LOAD_ERROR = 0x00000003,
    FILE_FROM_FUTURE = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_FWDDECL)
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
