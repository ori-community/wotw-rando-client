#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineMarkerRecord__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineMarkerRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineMarkerRecord__Fields_DEFINED)
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED)
#define IL2CPP_STRUCT_TimelineMarkerRecord__Fields_DEFINED
struct __declspec(align(8)) TimelineMarkerRecord__Fields {
    struct EntityId m_id;
    struct EntityId m_constrainedToEntityId;
    int32_t m_eventId;
    float m_previewTime;
    struct EntityId m_entityToDrawOn;
    float _VolatilePreviewTime_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineMarkerRecord__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineMarkerRecord__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimelineMarkerRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineMarkerRecord__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineMarkerRecord__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineMarkerRecord__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineMarkerRecord__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
