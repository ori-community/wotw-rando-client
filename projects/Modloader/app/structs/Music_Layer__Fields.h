#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_Layer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_Layer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer__Fields_DEFINED)
#define IL2CPP_STRUCT_Music_Layer__Fields_DEFINED
struct List_1_Core_Music_Layer_Track_;
struct __declspec(align(8)) Music_Layer__Fields {
    int32_t Priority;
    struct List_1_Core_Music_Layer_Track_* m_tracks;
};
#endif
#if !defined(IL2CPP_STRUCT_Music_Layer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Music_Layer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Core_Music_Layer_Track_.h>
#endif
#undef IL2CPP_STRUCT_Music_Layer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Music_Layer__Fields_FWDDECL)
#include <Modloader/app/structs/Music_Layer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music_Layer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
