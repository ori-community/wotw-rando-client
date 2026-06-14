#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_TrailPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_TrailPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_TrailPosition_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Trail_TrailPosition_DEFINED
struct Trail_TrailPosition {
    struct Vector3 Position;
    float StartTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_TrailPosition_FWDDECL)
#define IL2CPP_STRUCT_Trail_TrailPosition_FWDDECL
#endif
#undef IL2CPP_STRUCT_Trail_TrailPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_TrailPosition_DEFINED) && !defined(IL2CPP_STRUCT_Trail_TrailPosition_FWDDECL)
#include <Modloader/app/structs/Trail_TrailPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail_TrailPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
