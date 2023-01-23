#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingGroundHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingGroundHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingGroundHelper__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#if defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_MovingGroundHelper__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) MovingGroundHelper__Fields {
    struct Matrix4x4 GroundMatrix;
    struct Transform* Ground;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingGroundHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovingGroundHelper__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MovingGroundHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingGroundHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovingGroundHelper__Fields_FWDDECL)
#include <Modloader/app/structs/MovingGroundHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingGroundHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
