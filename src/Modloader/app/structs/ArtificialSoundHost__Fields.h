#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtificialSoundHost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtificialSoundHost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ArtificialSoundHost__Fields_DEFINED
struct Transform;
struct AkAuxSendArray;
struct __declspec(align(8)) ArtificialSoundHost__Fields {
    struct Vector3 m_position;
    struct Transform* m_anchor;
    uint64_t m_id;
    int32_t m_version;
    bool m_isActive;
    struct AkAuxSendArray* AuxSendArray;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArtificialSoundHost__Fields_FWDDECL
#include <Modloader/app/structs/AkAuxSendArray.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ArtificialSoundHost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArtificialSoundHost__Fields_FWDDECL)
#include <Modloader/app/structs/ArtificialSoundHost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtificialSoundHost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
