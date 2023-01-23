#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_DEFINED)
#define IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_DEFINED
struct String;
struct ReplayData;
struct __declspec(align(8)) WebService_c_DisplayClass0_0__Fields {
    struct String* raceName;
    struct String* playerId;
    struct ReplayData* replay;
};
#endif
#if !defined(IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_FWDDECL
#include <Modloader/app/structs/ReplayData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebService_c_DisplayClass0_0__Fields_FWDDECL)
#include <Modloader/app/structs/WebService_c_DisplayClass0_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebService_c_DisplayClass0_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
