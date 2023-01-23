#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_DateTime_DEFINED
struct DateTime {
    uint64_t dateData;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTime_FWDDECL)
#define IL2CPP_STRUCT_DateTime_FWDDECL
#endif
#undef IL2CPP_STRUCT_DateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTime_DEFINED) && !defined(IL2CPP_STRUCT_DateTime_FWDDECL)
#include <Modloader/app/structs/DateTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
