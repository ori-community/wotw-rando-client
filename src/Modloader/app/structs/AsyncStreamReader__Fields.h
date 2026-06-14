#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncStreamReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncStreamReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncStreamReader__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncStreamReader__Fields_DEFINED
struct Stream;
struct Encoding;
struct Decoder;
struct Byte__Array;
struct Char__Array;
struct ManualResetEvent;
struct Object;
struct __declspec(align(8)) AsyncStreamReader__Fields {
    struct Stream* stream;
    struct Encoding* encoding;
    struct Decoder* decoder;
    struct Byte__Array* byteBuffer;
    struct Char__Array* charBuffer;
    bool cancelOperation;
    struct ManualResetEvent* eofEvent;
    struct Object* syncObject;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncStreamReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncStreamReader__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_AsyncStreamReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncStreamReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncStreamReader__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncStreamReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncStreamReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
