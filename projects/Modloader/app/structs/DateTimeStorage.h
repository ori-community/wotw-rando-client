#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeStorage_DEFINED)
#include <Modloader/app/structs/DateTimeStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DateTimeStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_DateTimeStorage_DEFINED
struct DateTimeStorage__Class;
struct DateTimeStorage {
    struct DateTimeStorage__Class* klass;
    MonitorData* monitor;
    struct DateTimeStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeStorage_FWDDECL)
#define IL2CPP_STRUCT_DateTimeStorage_FWDDECL
#include <Modloader/app/structs/DateTimeStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeStorage_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeStorage_FWDDECL)
#include <Modloader/app/structs/DateTimeStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
