#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescriptorSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescriptorSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorSet_DEFINED)
#include <Modloader/app/structs/EventDescriptorSet__Fields.h>
#if defined(IL2CPP_STRUCT_EventDescriptorSet__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDescriptorSet_DEFINED
struct EventDescriptorSet__Class;
struct EventDescriptorSet {
    struct EventDescriptorSet__Class* klass;
    MonitorData* monitor;
    struct EventDescriptorSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventDescriptorSet_FWDDECL)
#define IL2CPP_STRUCT_EventDescriptorSet_FWDDECL
#include <Modloader/app/structs/EventDescriptorSet__Class.h>
#endif
#undef IL2CPP_STRUCT_EventDescriptorSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorSet_DEFINED) && !defined(IL2CPP_STRUCT_EventDescriptorSet_FWDDECL)
#include <Modloader/app/structs/EventDescriptorSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescriptorSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
