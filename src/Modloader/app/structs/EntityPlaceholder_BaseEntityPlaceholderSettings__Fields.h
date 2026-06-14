#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_DEFINED
struct __declspec(align(8)) EntityPlaceholder_BaseEntityPlaceholderSettings__Fields {
    float MaxHealth;
    float MaxSensorRadius;
    float LoseSightRadius;
    int32_t NumberOfExperienceOrbs;
    bool ShouldSpawnExpOrbs;
    bool ShouldSpawnLoot;
    int32_t NumberOfHealthOrbs;
    int32_t NumberOfEnergyOrbs;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholder_BaseEntityPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
