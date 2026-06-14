#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescriptorSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescriptorSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorSet__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDescriptorSet__Fields_DEFINED
struct HashSet_1_System_Int32_;
struct List_1_Moon_Timeline_IEventDescriptor_;
struct __declspec(align(8)) EventDescriptorSet__Fields {
    struct HashSet_1_System_Int32_* _m_ids_k__BackingField;
    struct List_1_Moon_Timeline_IEventDescriptor_* _Descriptors_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_EventDescriptorSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventDescriptorSet__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#endif
#undef IL2CPP_STRUCT_EventDescriptorSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventDescriptorSet__Fields_FWDDECL)
#include <Modloader/app/structs/EventDescriptorSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescriptorSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
