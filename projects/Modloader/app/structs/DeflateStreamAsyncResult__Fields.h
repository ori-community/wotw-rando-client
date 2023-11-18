#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_DEFINED
struct Byte__Array;
struct Object;
struct AsyncCallback;
struct __declspec(align(8)) DeflateStreamAsyncResult__Fields {
    struct Byte__Array* buffer;
    int32_t offset;
    int32_t count;
    bool isWrite;
    struct Object* m_AsyncObject;
    struct Object* m_AsyncState;
    struct AsyncCallback* m_AsyncCallback;
    struct Object* m_Result;
    bool m_CompletedSynchronously;
    int32_t m_InvokedCallback;
    int32_t m_Completed;
    struct Object* m_Event;
};
#endif
#if !defined(IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateStreamAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/DeflateStreamAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateStreamAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
