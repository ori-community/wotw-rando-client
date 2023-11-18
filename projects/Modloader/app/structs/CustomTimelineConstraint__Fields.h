#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomTimelineConstraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomTimelineConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomTimelineConstraint__Fields_DEFINED)
#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED) && defined(IL2CPP_STRUCT_ConstraintFlag__Enum_DEFINED)
#define IL2CPP_STRUCT_CustomTimelineConstraint__Fields_DEFINED
struct __declspec(align(8)) CustomTimelineConstraint__Fields {
    bool _Dirty_k__BackingField;
    float _CachedValue_k__BackingField;
    int32_t _EventId_k__BackingField;
    struct EntityId _ConstrainedTo_k__BackingField;
    float _TimeOffset_k__BackingField;
    ConstraintFlag__Enum _Flags_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomTimelineConstraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_CustomTimelineConstraint__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CustomTimelineConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomTimelineConstraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CustomTimelineConstraint__Fields_FWDDECL)
#include <Modloader/app/structs/CustomTimelineConstraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomTimelineConstraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
