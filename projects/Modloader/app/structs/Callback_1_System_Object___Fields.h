#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Callback_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Callback_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Callback_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_Callback_1_System_Object___Fields_DEFINED
struct CCallbackBaseVTable;
struct CCallbackBase;
struct Callback_1_T_DispatchDelegate_System_Object_;
struct __declspec(align(8)) Callback_1_System_Object___Fields {
    struct CCallbackBaseVTable* m_CallbackBaseVTable;
    void* m_pVTable;
    struct CCallbackBase* m_CCallbackBase;
    struct GCHandle m_pCCallbackBase;
    struct Callback_1_T_DispatchDelegate_System_Object_* m_Func;
    bool m_bGameServer;
    int32_t m_size;
    bool m_bDisposed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Callback_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_Callback_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/CCallbackBase.h>
#include <Modloader/app/structs/CCallbackBaseVTable.h>
#include <Modloader/app/structs/Callback_1_T_DispatchDelegate_System_Object_.h>
#endif
#undef IL2CPP_STRUCT_Callback_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Callback_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Callback_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/Callback_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Callback_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
