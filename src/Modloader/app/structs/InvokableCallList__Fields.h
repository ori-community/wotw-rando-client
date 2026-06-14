#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvokableCallList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvokableCallList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCallList__Fields_DEFINED)
#define IL2CPP_STRUCT_InvokableCallList__Fields_DEFINED
struct List_1_UnityEngine_Events_BaseInvokableCall_;
struct __declspec(align(8)) InvokableCallList__Fields {
    struct List_1_UnityEngine_Events_BaseInvokableCall_* m_PersistentCalls;
    struct List_1_UnityEngine_Events_BaseInvokableCall_* m_RuntimeCalls;
    struct List_1_UnityEngine_Events_BaseInvokableCall_* m_ExecutingCalls;
    bool m_NeedsUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_InvokableCallList__Fields_FWDDECL)
#define IL2CPP_STRUCT_InvokableCallList__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Events_BaseInvokableCall_.h>
#endif
#undef IL2CPP_STRUCT_InvokableCallList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCallList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InvokableCallList__Fields_FWDDECL)
#include <Modloader/app/structs/InvokableCallList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvokableCallList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
