#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceJobTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceJobTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceJobTracker__Fields_DEFINED
struct List_1_TimesliceJobTracker_TimesliceJobSample_;
struct String;
struct __declspec(align(8)) TimesliceJobTracker__Fields {
    bool ExportXML;
    struct List_1_TimesliceJobTracker_TimesliceJobSample_* m_entries;
    struct String* m_time;
};
#endif
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceJobTracker__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TimesliceJobTracker_TimesliceJobSample_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimesliceJobTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceJobTracker__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceJobTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceJobTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
