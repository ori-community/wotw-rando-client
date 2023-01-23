#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer_Scheduler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer_Scheduler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_Scheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_Timer_Scheduler__Fields_DEFINED
struct SortedList;
struct ManualResetEvent;
struct __declspec(align(8)) Timer_Scheduler__Fields {
    struct SortedList* list;
    struct ManualResetEvent* changed;
};
#endif
#if !defined(IL2CPP_STRUCT_Timer_Scheduler__Fields_FWDDECL)
#define IL2CPP_STRUCT_Timer_Scheduler__Fields_FWDDECL
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/SortedList.h>
#endif
#undef IL2CPP_STRUCT_Timer_Scheduler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_Scheduler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Timer_Scheduler__Fields_FWDDECL)
#include <Modloader/app/structs/Timer_Scheduler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer_Scheduler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
