#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtraEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtraEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtraEvent__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ExtraEvent__Fields_DEFINED
struct Entity;
struct String;
struct __declspec(align(8)) ExtraEvent__Fields {
    int32_t FrameNo;
    struct Entity* Target;
    struct Vector3 Position;
    struct Vector3 RBVelocity;
    struct Vector3 TargetVelocity;
    struct String* EventDescription;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtraEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExtraEvent__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExtraEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtraEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExtraEvent__Fields_FWDDECL)
#include <Modloader/app/structs/ExtraEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtraEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
