#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_Layer_Track_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_Layer_Track_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer_Track_DEFINED)
#include <Modloader/app/structs/Music_Layer_Track__Fields.h>
#if defined(IL2CPP_STRUCT_Music_Layer_Track__Fields_DEFINED)
#define IL2CPP_STRUCT_Music_Layer_Track_DEFINED
struct Music_Layer_Track__Class;
struct Music_Layer_Track {
    struct Music_Layer_Track__Class* klass;
    MonitorData* monitor;
    struct Music_Layer_Track__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Music_Layer_Track_FWDDECL)
#define IL2CPP_STRUCT_Music_Layer_Track_FWDDECL
#include <Modloader/app/structs/Music_Layer_Track__Class.h>
#endif
#undef IL2CPP_STRUCT_Music_Layer_Track_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer_Track_DEFINED) && !defined(IL2CPP_STRUCT_Music_Layer_Track_FWDDECL)
#include <Modloader/app/structs/Music_Layer_Track.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music_Layer_Track.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
