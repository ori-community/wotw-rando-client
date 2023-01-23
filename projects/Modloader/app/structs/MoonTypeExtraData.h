#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTypeExtraData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTypeExtraData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeExtraData_DEFINED)
#define IL2CPP_STRUCT_MoonTypeExtraData_DEFINED
struct MoonTypeExtraData {
    int32_t IntExtraData;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTypeExtraData_FWDDECL)
#define IL2CPP_STRUCT_MoonTypeExtraData_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonTypeExtraData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeExtraData_DEFINED) && !defined(IL2CPP_STRUCT_MoonTypeExtraData_FWDDECL)
#include <Modloader/app/structs/MoonTypeExtraData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTypeExtraData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
