#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadDelegate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadDelegate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadDelegate__Fields_DEFINED
struct Timer_1;
struct List_1_System_Action_;
struct __declspec(align(8)) MainThreadDelegate__Fields {
    struct Timer_1* timer;
    struct List_1_System_Action_* m_actions;
};
#endif
#if !defined(IL2CPP_STRUCT_MainThreadDelegate__Fields_FWDDECL)
#define IL2CPP_STRUCT_MainThreadDelegate__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Action_.h>
#include <Modloader/app/structs/Timer_1.h>
#endif
#undef IL2CPP_STRUCT_MainThreadDelegate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDelegate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadDelegate__Fields_FWDDECL)
#include <Modloader/app/structs/MainThreadDelegate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadDelegate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
