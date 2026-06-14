#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeUtils_DEFINED)
#define IL2CPP_STRUCT_DateTimeUtils_DEFINED
struct DateTimeUtils__Class;
struct DateTimeUtils {
    struct DateTimeUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeUtils_FWDDECL)
#define IL2CPP_STRUCT_DateTimeUtils_FWDDECL
#include <Modloader/app/structs/DateTimeUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeUtils_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeUtils_FWDDECL)
#include <Modloader/app/structs/DateTimeUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
