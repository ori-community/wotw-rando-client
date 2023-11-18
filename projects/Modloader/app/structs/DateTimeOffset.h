#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeOffset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeOffset_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_DateTimeOffset_DEFINED
struct DateTimeOffset {
    struct DateTime m_dateTime;
    int16_t m_offsetMinutes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeOffset_FWDDECL)
#define IL2CPP_STRUCT_DateTimeOffset_FWDDECL
#endif
#undef IL2CPP_STRUCT_DateTimeOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeOffset_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeOffset_FWDDECL)
#include <Modloader/app/structs/DateTimeOffset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeOffset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
