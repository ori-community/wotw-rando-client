#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CoreCameraValues_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CoreCameraValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_CoreCameraValues_DEFINED)
#define IL2CPP_STRUCT_CoreCameraValues_DEFINED
struct CoreCameraValues {
    int32_t filterMode;
    uint32_t cullingMask;
    int32_t guid;
    int32_t renderImmediateObjects;
};
#endif
#if !defined(IL2CPP_STRUCT_CoreCameraValues_FWDDECL)
#define IL2CPP_STRUCT_CoreCameraValues_FWDDECL
#endif
#undef IL2CPP_STRUCT_CoreCameraValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_CoreCameraValues_DEFINED) && !defined(IL2CPP_STRUCT_CoreCameraValues_FWDDECL)
#include <Modloader/app/structs/CoreCameraValues.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CoreCameraValues.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
