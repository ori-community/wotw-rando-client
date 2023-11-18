#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticEventDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticEventDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEventDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticEventDescriptor__Fields_DEFINED
struct String;
struct __declspec(align(8)) StaticEventDescriptor__Fields {
    int32_t _EventId_k__BackingField;
    float _StaticTime_k__BackingField;
    struct String* _Name_k__BackingField;
    float _VolatilePreviewTime_k__BackingField;
    bool _IsConstrainable_k__BackingField;
    bool _IsDeletable_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_StaticEventDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaticEventDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StaticEventDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEventDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaticEventDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/StaticEventDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticEventDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
