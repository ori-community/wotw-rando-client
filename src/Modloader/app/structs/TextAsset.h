#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextAsset_DEFINED)
#include <Modloader/app/structs/TextAsset__Fields.h>
#if defined(IL2CPP_STRUCT_TextAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_TextAsset_DEFINED
struct TextAsset__Class;
struct TextAsset {
    struct TextAsset__Class* klass;
    MonitorData* monitor;
    struct TextAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextAsset_FWDDECL)
#define IL2CPP_STRUCT_TextAsset_FWDDECL
#include <Modloader/app/structs/TextAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_TextAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextAsset_DEFINED) && !defined(IL2CPP_STRUCT_TextAsset_FWDDECL)
#include <Modloader/app/structs/TextAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
