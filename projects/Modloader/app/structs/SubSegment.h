#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubSegment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubSegment_DEFINED)
#include <Modloader/app/structs/SubSegment__Fields.h>
#if defined(IL2CPP_STRUCT_SubSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_SubSegment_DEFINED
struct SubSegment__Class;
struct SubSegment {
    struct SubSegment__Class* klass;
    MonitorData* monitor;
    struct SubSegment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubSegment_FWDDECL)
#define IL2CPP_STRUCT_SubSegment_FWDDECL
#include <Modloader/app/structs/SubSegment__Class.h>
#endif
#undef IL2CPP_STRUCT_SubSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubSegment_DEFINED) && !defined(IL2CPP_STRUCT_SubSegment_FWDDECL)
#include <Modloader/app/structs/SubSegment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubSegment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
