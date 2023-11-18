#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeConverter_DEFINED)
#define IL2CPP_STRUCT_DateTimeConverter_DEFINED
struct DateTimeConverter__Class;
struct DateTimeConverter {
    struct DateTimeConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeConverter_FWDDECL)
#define IL2CPP_STRUCT_DateTimeConverter_FWDDECL
#include <Modloader/app/structs/DateTimeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeConverter_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeConverter_FWDDECL)
#include <Modloader/app/structs/DateTimeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
