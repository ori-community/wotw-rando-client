#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindSegment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindSegment_DEFINED)
#include <Modloader/app/structs/WindSegment__Fields.h>
#if defined(IL2CPP_STRUCT_WindSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_WindSegment_DEFINED
struct WindSegment__Class;
struct WindSegment {
    struct WindSegment__Class* klass;
    MonitorData* monitor;
    struct WindSegment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindSegment_FWDDECL)
#define IL2CPP_STRUCT_WindSegment_FWDDECL
#include <Modloader/app/structs/WindSegment__Class.h>
#endif
#undef IL2CPP_STRUCT_WindSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindSegment_DEFINED) && !defined(IL2CPP_STRUCT_WindSegment_FWDDECL)
#include <Modloader/app/structs/WindSegment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindSegment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
