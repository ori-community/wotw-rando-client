#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HebrewNumber_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HebrewNumber_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumber_DEFINED)
#define IL2CPP_STRUCT_HebrewNumber_DEFINED
struct HebrewNumber__Class;
struct HebrewNumber {
    struct HebrewNumber__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HebrewNumber_FWDDECL)
#define IL2CPP_STRUCT_HebrewNumber_FWDDECL
#include <Modloader/app/structs/HebrewNumber__Class.h>
#endif
#undef IL2CPP_STRUCT_HebrewNumber_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumber_DEFINED) && !defined(IL2CPP_STRUCT_HebrewNumber_FWDDECL)
#include <Modloader/app/structs/HebrewNumber.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HebrewNumber.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
