#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallResult_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallResult_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallResult_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED) && defined(IL2CPP_STRUCT_SteamAPICall_t_DEFINED)
#define IL2CPP_STRUCT_CallResult_1_System_Object___Fields_DEFINED
struct CCallbackBaseVTable;
struct CCallbackBase;
struct CallResult_1_T_APIDispatchDelegate_System_Object_;
struct __declspec(align(8)) CallResult_1_System_Object___Fields {
    struct CCallbackBaseVTable* m_CallbackBaseVTable;
    void* m_pVTable;
    struct CCallbackBase* m_CCallbackBase;
    struct GCHandle m_pCCallbackBase;
    struct CallResult_1_T_APIDispatchDelegate_System_Object_* m_Func;
    struct SteamAPICall_t m_hAPICall;
    int32_t m_size;
    bool m_bDisposed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallResult_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_CallResult_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/CCallbackBase.h>
#include <Modloader/app/structs/CCallbackBaseVTable.h>
#include <Modloader/app/structs/CallResult_1_T_APIDispatchDelegate_System_Object_.h>
#endif
#undef IL2CPP_STRUCT_CallResult_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallResult_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_CallResult_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/CallResult_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallResult_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
