#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeOffsetStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeOffsetStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeOffsetStorage_DEFINED)
#include <Modloader/app/structs/DateTimeOffsetStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DateTimeOffsetStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_DateTimeOffsetStorage_DEFINED
struct DateTimeOffsetStorage__Class;
struct DateTimeOffsetStorage {
    struct DateTimeOffsetStorage__Class* klass;
    MonitorData* monitor;
    struct DateTimeOffsetStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeOffsetStorage_FWDDECL)
#define IL2CPP_STRUCT_DateTimeOffsetStorage_FWDDECL
#include <Modloader/app/structs/DateTimeOffsetStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeOffsetStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeOffsetStorage_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeOffsetStorage_FWDDECL)
#include <Modloader/app/structs/DateTimeOffsetStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeOffsetStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
