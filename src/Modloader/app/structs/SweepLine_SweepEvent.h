#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_SweepEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_SweepEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEvent_DEFINED)
#include <Modloader/app/structs/SweepLine_SweepEvent__Fields.h>
#if defined(IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_SweepLine_SweepEvent_DEFINED
struct SweepLine_SweepEvent__Class;
struct SweepLine_SweepEvent {
    struct SweepLine_SweepEvent__Class* klass;
    MonitorData* monitor;
    struct SweepLine_SweepEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEvent_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_SweepEvent_FWDDECL
#include <Modloader/app/structs/SweepLine_SweepEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_SweepEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEvent_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_SweepEvent_FWDDECL)
#include <Modloader/app/structs/SweepLine_SweepEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine_SweepEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
