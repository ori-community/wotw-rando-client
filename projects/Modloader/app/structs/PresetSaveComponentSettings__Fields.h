#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_DEFINED
struct Dictionary_2_System_String_System_Boolean_;
struct __declspec(align(8)) PresetSaveComponentSettings__Fields {
    bool Saved;
    struct Dictionary_2_System_String_System_Boolean_* ExcludePaths;
    bool Implicit;
};
#endif
#if !defined(IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_FWDDECL)
#include <Modloader/app/structs/PresetSaveComponentSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PresetSaveComponentSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
