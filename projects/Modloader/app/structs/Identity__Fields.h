#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Identity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Identity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Identity__Fields_DEFINED)
#define IL2CPP_STRUCT_Identity__Fields_DEFINED
struct String;
struct IMessageSink;
struct DynamicPropertyCollection;
struct ObjRef;
struct __declspec(align(8)) Identity__Fields {
    struct String* _objectUri;
    struct IMessageSink* _channelSink;
    struct IMessageSink* _envoySink;
    struct DynamicPropertyCollection* _clientDynamicProperties;
    struct DynamicPropertyCollection* _serverDynamicProperties;
    struct ObjRef* _objRef;
    bool _disposed;
};
#endif
#if !defined(IL2CPP_STRUCT_Identity__Fields_FWDDECL)
#define IL2CPP_STRUCT_Identity__Fields_FWDDECL
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Identity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Identity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Identity__Fields_FWDDECL)
#include <Modloader/app/structs/Identity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Identity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
