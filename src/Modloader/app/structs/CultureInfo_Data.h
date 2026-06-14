#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureInfo_Data_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureInfo_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo_Data_DEFINED)
#define IL2CPP_STRUCT_CultureInfo_Data_DEFINED
struct CultureInfo_Data {
    int32_t ansi;
    int32_t ebcdic;
    int32_t mac;
    int32_t oem;
    bool right_to_left;
    uint8_t list_sep;
};
#endif
#if !defined(IL2CPP_STRUCT_CultureInfo_Data_FWDDECL)
#define IL2CPP_STRUCT_CultureInfo_Data_FWDDECL
#endif
#undef IL2CPP_STRUCT_CultureInfo_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo_Data_DEFINED) && !defined(IL2CPP_STRUCT_CultureInfo_Data_FWDDECL)
#include <Modloader/app/structs/CultureInfo_Data.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureInfo_Data.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
