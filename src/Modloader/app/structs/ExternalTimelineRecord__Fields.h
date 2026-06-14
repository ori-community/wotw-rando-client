#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalTimelineRecord__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalTimelineRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineRecord__Fields_DEFINED)
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED)
#define IL2CPP_STRUCT_ExternalTimelineRecord__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct __declspec(align(8)) ExternalTimelineRecord__Fields {
    struct EntityId m_id;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* m_entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalTimelineRecord__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExternalTimelineRecord__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#endif
#undef IL2CPP_STRUCT_ExternalTimelineRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineRecord__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExternalTimelineRecord__Fields_FWDDECL)
#include <Modloader/app/structs/ExternalTimelineRecord__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalTimelineRecord__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
