#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInventory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInventory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInventory__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInventory__Fields_DEFINED
struct Dictionary_2_System_Object_System_Int32_;
struct SeinInventory__Fields {
    struct GuidOwner__Fields _;
    int32_t SkillPointsCollected;
    struct Dictionary_2_System_Object_System_Int32_* m_allocatedKeystones;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInventory__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInventory__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_SeinInventory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInventory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInventory__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInventory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInventory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
