#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityEventBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityEventBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityEventBase__Fields_DEFINED
struct InvokableCallList;
struct PersistentCallGroup;
struct __declspec(align(8)) UnityEventBase__Fields {
    struct InvokableCallList* m_Calls;
    struct PersistentCallGroup* m_PersistentCalls;
    bool m_CallsDirty;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityEventBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityEventBase__Fields_FWDDECL
#include <Modloader/app/structs/InvokableCallList.h>
#include <Modloader/app/structs/PersistentCallGroup.h>
#endif
#undef IL2CPP_STRUCT_UnityEventBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEventBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityEventBase__Fields_FWDDECL)
#include <Modloader/app/structs/UnityEventBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityEventBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
