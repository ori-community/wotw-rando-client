#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteBone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteBone_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_SpriteBone_DEFINED
struct String;
struct SpriteBone {
    struct String* m_Name;
    struct Vector3 m_Position;
    struct Quaternion m_Rotation;
    float m_Length;
    int32_t m_ParentId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteBone_FWDDECL)
#define IL2CPP_STRUCT_SpriteBone_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SpriteBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteBone_DEFINED) && !defined(IL2CPP_STRUCT_SpriteBone_FWDDECL)
#include <Modloader/app/structs/SpriteBone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteBone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
