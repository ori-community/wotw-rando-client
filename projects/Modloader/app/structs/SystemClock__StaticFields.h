#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemClock__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemClock__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemClock__StaticFields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_SystemClock__StaticFields_DEFINED
struct SystemClock__StaticFields {
    struct DateTime s_Epoch;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SystemClock__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SystemClock__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SystemClock__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemClock__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SystemClock__StaticFields_FWDDECL)
#include <Modloader/app/structs/SystemClock__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemClock__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
