#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescriptorCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescriptorCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDescriptorCollection__Fields_DEFINED
struct EventDescriptor_1__Array;
struct String__Array;
struct IComparer;
struct __declspec(align(8)) EventDescriptorCollection__Fields {
    struct EventDescriptor_1__Array* events;
    struct String__Array* namedSort;
    struct IComparer* comparer;
    bool eventsOwned;
    bool needSort;
    int32_t eventCount;
    bool readOnly;
};
#endif
#if !defined(IL2CPP_STRUCT_EventDescriptorCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventDescriptorCollection__Fields_FWDDECL
#include <Modloader/app/structs/EventDescriptor_1__Array.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_EventDescriptorCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptorCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventDescriptorCollection__Fields_FWDDECL)
#include <Modloader/app/structs/EventDescriptorCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescriptorCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
