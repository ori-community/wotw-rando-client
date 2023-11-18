#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_SerialNumber_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_SerialNumber_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_SerialNumber_DEFINED)
#include <Modloader/app/structs/X520_SerialNumber__Fields.h>
#if defined(IL2CPP_STRUCT_X520_SerialNumber__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_SerialNumber_DEFINED
struct X520_SerialNumber__Class;
struct X520_SerialNumber {
    struct X520_SerialNumber__Class* klass;
    MonitorData* monitor;
    struct X520_SerialNumber__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_SerialNumber_FWDDECL)
#define IL2CPP_STRUCT_X520_SerialNumber_FWDDECL
#include <Modloader/app/structs/X520_SerialNumber__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_SerialNumber_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_SerialNumber_DEFINED) && !defined(IL2CPP_STRUCT_X520_SerialNumber_FWDDECL)
#include <Modloader/app/structs/X520_SerialNumber.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_SerialNumber.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
