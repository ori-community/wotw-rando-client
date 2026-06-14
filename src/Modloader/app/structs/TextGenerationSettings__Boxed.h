#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextGenerationSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextGenerationSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerationSettings__Boxed_DEFINED)
#include <Modloader/app/structs/TextGenerationSettings.h>
#if defined(IL2CPP_STRUCT_TextGenerationSettings_DEFINED)
#define IL2CPP_STRUCT_TextGenerationSettings__Boxed_DEFINED
struct TextGenerationSettings__Class;
struct TextGenerationSettings__Boxed {
    struct TextGenerationSettings__Class* klass;
    MonitorData* monitor;
    struct TextGenerationSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextGenerationSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TextGenerationSettings__Boxed_FWDDECL
#include <Modloader/app/structs/TextGenerationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_TextGenerationSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerationSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TextGenerationSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/TextGenerationSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextGenerationSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
