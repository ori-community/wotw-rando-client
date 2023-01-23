#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightInfluenceSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightInfluenceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluenceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LightInfluenceSettings__Fields_DEFINED
struct List_1_LightInfluence_;
struct Dictionary_2_LightPriority_Layer_LightInfluence_;
struct __declspec(align(8)) LightInfluenceSettings__Fields {
    struct List_1_LightInfluence_* InfluencePerLayer;
    struct Dictionary_2_LightPriority_Layer_LightInfluence_* m_influenceMap;
};
#endif
#if !defined(IL2CPP_STRUCT_LightInfluenceSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightInfluenceSettings__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_LightPriority_Layer_LightInfluence_.h>
#include <Modloader/app/structs/List_1_LightInfluence_.h>
#endif
#undef IL2CPP_STRUCT_LightInfluenceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluenceSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightInfluenceSettings__Fields_FWDDECL)
#include <Modloader/app/structs/LightInfluenceSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightInfluenceSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
