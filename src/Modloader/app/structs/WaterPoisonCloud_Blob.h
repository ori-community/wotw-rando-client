#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonCloud_Blob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonCloud_Blob_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud_Blob_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonCloud_Blob_DEFINED
struct WaterPoisonCloud_Blob {
    struct Vector3 Position;
    float Size;
    float Alpha;
    float CurrentTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud_Blob_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonCloud_Blob_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaterPoisonCloud_Blob_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud_Blob_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonCloud_Blob_FWDDECL)
#include <Modloader/app/structs/WaterPoisonCloud_Blob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonCloud_Blob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
