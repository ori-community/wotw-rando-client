#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggregateException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggregateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateException_DEFINED)
#include <Modloader/app/structs/AggregateException__Fields.h>
#if defined(IL2CPP_STRUCT_AggregateException__Fields_DEFINED)
#define IL2CPP_STRUCT_AggregateException_DEFINED
struct AggregateException__Class;
struct AggregateException {
    struct AggregateException__Class* klass;
    MonitorData* monitor;
    struct AggregateException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AggregateException_FWDDECL)
#define IL2CPP_STRUCT_AggregateException_FWDDECL
#include <Modloader/app/structs/AggregateException__Class.h>
#endif
#undef IL2CPP_STRUCT_AggregateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateException_DEFINED) && !defined(IL2CPP_STRUCT_AggregateException_FWDDECL)
#include <Modloader/app/structs/AggregateException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggregateException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
