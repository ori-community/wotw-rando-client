#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_DEFINED)
#include <Modloader/app/structs/Task_1_System_Int32___Fields.h>
#if defined(IL2CPP_STRUCT_Task_1_System_Int32___Fields_DEFINED)
#define IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_DEFINED
struct Stream;
struct Byte__Array;
struct AsyncCallback;
struct ExecutionContext;
struct Stream_ReadWriteTask__Fields {
    struct Task_1_System_Int32___Fields _;
    bool _isRead;
    struct Stream* _stream;
    struct Byte__Array* _buffer;
    int32_t _offset;
    int32_t _count;
    struct AsyncCallback* _callback;
    struct ExecutionContext* _context;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_FWDDECL)
#include <Modloader/app/structs/Stream_ReadWriteTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stream_ReadWriteTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
