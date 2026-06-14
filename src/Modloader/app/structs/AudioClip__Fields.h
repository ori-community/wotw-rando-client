#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioClip__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioClip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioClip__Fields_DEFINED)
#include <Modloader/app/structs/Object_1__Fields.h>
#if defined(IL2CPP_STRUCT_Object_1__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioClip__Fields_DEFINED
struct AudioClip_PCMReaderCallback;
struct AudioClip_PCMSetPositionCallback;
struct AudioClip__Fields {
    struct Object_1__Fields _;
    struct AudioClip_PCMReaderCallback* m_PCMReaderCallback;
    struct AudioClip_PCMSetPositionCallback* m_PCMSetPositionCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioClip__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioClip__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip_PCMReaderCallback.h>
#include <Modloader/app/structs/AudioClip_PCMSetPositionCallback.h>
#endif
#undef IL2CPP_STRUCT_AudioClip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioClip__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioClip__Fields_FWDDECL)
#include <Modloader/app/structs/AudioClip__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioClip__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
