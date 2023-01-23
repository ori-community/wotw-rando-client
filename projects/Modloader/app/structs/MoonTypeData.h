#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTypeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTypeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeData_DEFINED)
#include <Modloader/app/structs/MoonTypeExtraData.h>
#if defined(IL2CPP_STRUCT_MoonTypeExtraData_DEFINED)
#define IL2CPP_STRUCT_MoonTypeData_DEFINED
struct Object_1;
struct MoonTypeData {
    struct Object_1* UnityObjectRef;
    struct MoonTypeExtraData ExtraData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTypeData_FWDDECL)
#define IL2CPP_STRUCT_MoonTypeData_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#endif
#undef IL2CPP_STRUCT_MoonTypeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeData_DEFINED) && !defined(IL2CPP_STRUCT_MoonTypeData_FWDDECL)
#include <Modloader/app/structs/MoonTypeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTypeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
