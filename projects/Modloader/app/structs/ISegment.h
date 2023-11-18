#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISegment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISegment_DEFINED)
#define IL2CPP_STRUCT_ISegment_DEFINED
struct ISegment__Class;
struct ISegment {
    struct ISegment__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISegment_FWDDECL)
#define IL2CPP_STRUCT_ISegment_FWDDECL
#include <Modloader/app/structs/ISegment__Class.h>
#endif
#undef IL2CPP_STRUCT_ISegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISegment_DEFINED) && !defined(IL2CPP_STRUCT_ISegment_FWDDECL)
#include <Modloader/app/structs/ISegment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISegment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
