#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamWriter__Fields_DEFINED)
#include <Modloader/app/structs/TextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_TextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_StreamWriter__Fields_DEFINED
struct Stream;
struct Encoding;
struct Encoder;
struct Byte__Array;
struct Char__Array;
struct Task;
struct StreamWriter__Fields {
    struct TextWriter__Fields _;
    struct Stream* stream;
    struct Encoding* encoding;
    struct Encoder* encoder;
    struct Byte__Array* byteBuffer;
    struct Char__Array* charBuffer;
    int32_t charPos;
    int32_t charLen;
    bool autoFlush;
    bool haveWrittenPreamble;
    bool closable;
    struct Task* _asyncWriteTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_StreamWriter__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_StreamWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StreamWriter__Fields_FWDDECL)
#include <Modloader/app/structs/StreamWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
