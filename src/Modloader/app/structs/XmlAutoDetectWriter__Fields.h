#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_DEFINED)
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_DEFINED
struct XmlRawWriter;
struct OnRemoveWriter;
struct XmlWriterSettings;
struct XmlEventCache;
struct TextWriter;
struct Stream;
struct XmlAutoDetectWriter__Fields {
    struct XmlRawWriter__Fields _;
    struct XmlRawWriter* wrapped;
    struct OnRemoveWriter* onRemove;
    struct XmlWriterSettings* writerSettings;
    struct XmlEventCache* eventCache;
    struct TextWriter* textWriter;
    struct Stream* strm;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_FWDDECL
#include <Modloader/app/structs/OnRemoveWriter.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlEventCache.h>
#include <Modloader/app/structs/XmlRawWriter.h>
#include <Modloader/app/structs/XmlWriterSettings.h>
#endif
#undef IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAutoDetectWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAutoDetectWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAutoDetectWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
