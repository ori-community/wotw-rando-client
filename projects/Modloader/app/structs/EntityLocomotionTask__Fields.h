#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityLocomotionTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityLocomotionTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#include <Modloader/app/structs/EntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED
struct Locomotion;
struct EntityLocomotionTask__Fields {
    struct EntityTask__Fields _;
    int32_t m_FSMStateID;
    struct Locomotion* m_parentLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityLocomotionTask__Fields_FWDDECL
#include <Modloader/app/structs/Locomotion.h>
#endif
#undef IL2CPP_STRUCT_EntityLocomotionTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_FWDDECL)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
