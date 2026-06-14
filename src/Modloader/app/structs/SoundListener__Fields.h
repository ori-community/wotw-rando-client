#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundListener__Fields_DEFINED)
#include <Modloader/app/structs/SoundHost__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SoundHost__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SoundListener__Fields_DEFINED
struct SoundListener__Fields {
    struct SoundHost__Fields _;
    struct Vector3 m_positionOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundListener__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SoundListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundListener__Fields_FWDDECL)
#include <Modloader/app/structs/SoundListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
