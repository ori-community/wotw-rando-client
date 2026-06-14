#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRDriverManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRDriverManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRDriverManager_DEFINED)
#define IL2CPP_STRUCT_IVRDriverManager_DEFINED
struct IVRDriverManager_GetDriverCount;
struct IVRDriverManager_GetDriverName;
struct IVRDriverManager {
    struct IVRDriverManager_GetDriverCount* GetDriverCount;
    struct IVRDriverManager_GetDriverName* GetDriverName;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRDriverManager_FWDDECL)
#define IL2CPP_STRUCT_IVRDriverManager_FWDDECL
#include <Modloader/app/structs/IVRDriverManager_GetDriverCount.h>
#include <Modloader/app/structs/IVRDriverManager_GetDriverName.h>
#endif
#undef IL2CPP_STRUCT_IVRDriverManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRDriverManager_DEFINED) && !defined(IL2CPP_STRUCT_IVRDriverManager_FWDDECL)
#include <Modloader/app/structs/IVRDriverManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRDriverManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
