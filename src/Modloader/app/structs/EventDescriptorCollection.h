#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescriptorCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescriptorCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorCollection_DEFINED)
#include <Modloader/app/structs/EventDescriptorCollection__Fields.h>
#if defined(IL2CPP_STRUCT_EventDescriptorCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDescriptorCollection_DEFINED
struct EventDescriptorCollection__Class;
struct EventDescriptorCollection {
    struct EventDescriptorCollection__Class* klass;
    MonitorData* monitor;
    struct EventDescriptorCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventDescriptorCollection_FWDDECL)
#define IL2CPP_STRUCT_EventDescriptorCollection_FWDDECL
#include <Modloader/app/structs/EventDescriptorCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_EventDescriptorCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorCollection_DEFINED) && !defined(IL2CPP_STRUCT_EventDescriptorCollection_FWDDECL)
#include <Modloader/app/structs/EventDescriptorCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescriptorCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
