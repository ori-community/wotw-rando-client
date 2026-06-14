#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_DEFINED
struct FieldInfo_1__Array;
struct Boolean__Array;
struct __declspec(align(8)) AbilitiesPlugin_FieldInfoCollection__Fields {
    struct FieldInfo_1__Array* PublicFields;
    struct FieldInfo_1__Array* PrivateFields;
    struct Boolean__Array* ShowInPlaybackInspectorAttributePublic;
    struct Boolean__Array* ShowInPlaybackInspectorAttributePrivate;
};
#endif
#if !defined(IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#endif
#undef IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AbilitiesPlugin_FieldInfoCollection__Fields_FWDDECL)
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
