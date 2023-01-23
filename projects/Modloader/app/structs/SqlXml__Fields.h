#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlXml__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlXml__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlXml__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlXml__Fields_DEFINED
struct MethodInfo_1;
struct Stream;
struct __declspec(align(8)) SqlXml__Fields {
    struct MethodInfo_1* _createSqlReaderMethodInfo;
    bool _fNotNull;
    struct Stream* _stream;
    bool _firstCreateReader;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlXml__Fields_FWDDECL)
#define IL2CPP_STRUCT_SqlXml__Fields_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_SqlXml__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlXml__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SqlXml__Fields_FWDDECL)
#include <Modloader/app/structs/SqlXml__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlXml__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
