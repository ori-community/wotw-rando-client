#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_time_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_time_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_time_DEFINED)
#include <Modloader/app/structs/Datatype_time__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_time__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_time_DEFINED
struct Datatype_time__Class;
struct Datatype_time {
    struct Datatype_time__Class* klass;
    MonitorData* monitor;
    struct Datatype_time__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_time_FWDDECL)
#define IL2CPP_STRUCT_Datatype_time_FWDDECL
#include <Modloader/app/structs/Datatype_time__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_time_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_time_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_time_FWDDECL)
#include <Modloader/app/structs/Datatype_time.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_time.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
