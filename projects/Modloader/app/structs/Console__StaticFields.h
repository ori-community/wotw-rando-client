#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Console__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Console__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Console__StaticFields_DEFINED
struct TextWriter;
struct TextReader;
struct Encoding;
struct ConsoleCancelEventHandler;
struct Console_InternalCancelHandler;
struct Console__StaticFields {
    struct TextWriter* stdout_1;
    struct TextWriter* stderr_1;
    struct TextReader* stdin_1;
    struct Encoding* inputEncoding;
    struct Encoding* outputEncoding;
    struct ConsoleCancelEventHandler* cancel_event;
    struct Console_InternalCancelHandler* cancel_handler;
};
#endif
#if !defined(IL2CPP_STRUCT_Console__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Console__StaticFields_FWDDECL
#include <Modloader/app/structs/ConsoleCancelEventHandler.h>
#include <Modloader/app/structs/Console_InternalCancelHandler.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_Console__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Console__StaticFields_FWDDECL)
#include <Modloader/app/structs/Console__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Console__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
