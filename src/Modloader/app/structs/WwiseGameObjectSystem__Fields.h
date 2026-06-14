#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_DEFINED
struct ArtificialSoundHost__Array;
struct __declspec(align(8)) WwiseGameObjectSystem__Fields {
    struct ArtificialSoundHost__Array* m_soundHosts;
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_FWDDECL
#include <Modloader/app/structs/ArtificialSoundHost__Array.h>
#endif
#undef IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_FWDDECL)
#include <Modloader/app/structs/WwiseGameObjectSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseGameObjectSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
