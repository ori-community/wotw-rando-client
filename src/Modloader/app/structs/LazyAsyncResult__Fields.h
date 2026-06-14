#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LazyAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LazyAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LazyAsyncResult__Fields_DEFINED
struct Object;
struct AsyncCallback;
struct __declspec(align(8)) LazyAsyncResult__Fields {
    struct Object* m_AsyncObject;
    struct Object* m_AsyncState;
    struct AsyncCallback* m_AsyncCallback;
    struct Object* m_Result;
    int32_t m_ErrorCode;
    int32_t m_IntCompleted;
    bool m_EndCalled;
    bool m_UserEvent;
    struct Object* m_Event;
};
#endif
#if !defined(IL2CPP_STRUCT_LazyAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_LazyAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_LazyAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LazyAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/LazyAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LazyAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
