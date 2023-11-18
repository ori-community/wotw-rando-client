#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStreamAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStreamAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_FileStreamAsyncResult__Fields_DEFINED
struct Object;
struct ManualResetEvent;
struct AsyncCallback;
struct __declspec(align(8)) FileStreamAsyncResult__Fields {
    struct Object* state;
    bool completed;
    struct ManualResetEvent* wh;
    struct AsyncCallback* cb;
    bool completedSynch;
    int32_t Count;
    int32_t OriginalCount;
    int32_t BytesRead;
    struct AsyncCallback* realcb;
};
#endif
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileStreamAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_FileStreamAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileStreamAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/FileStreamAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStreamAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
