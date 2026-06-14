#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoChunkStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoChunkStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoChunkStream__Fields_DEFINED)
#include <Modloader/app/structs/MonoChunkStream_State__Enum.h>
#if defined(IL2CPP_STRUCT_MonoChunkStream_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoChunkStream__Fields_DEFINED
struct WebHeaderCollection;
struct StringBuilder;
struct ArrayList;
struct __declspec(align(8)) MonoChunkStream__Fields {
    struct WebHeaderCollection* headers;
    int32_t chunkSize;
    int32_t chunkRead;
    int32_t totalWritten;
    MonoChunkStream_State__Enum state;

    struct StringBuilder* saved;
    bool sawCR;
    bool gotit;
    int32_t trailerState;
    struct ArrayList* chunks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoChunkStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoChunkStream__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#undef IL2CPP_STRUCT_MonoChunkStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoChunkStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoChunkStream__Fields_FWDDECL)
#include <Modloader/app/structs/MonoChunkStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoChunkStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
