#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjRef__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjRef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRef__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjRef__Fields_DEFINED
struct IChannelInfo;
struct String;
struct IRemotingTypeInfo;
struct IEnvoyInfo;
struct Type;
struct __declspec(align(8)) ObjRef__Fields {
    struct IChannelInfo* channel_info;
    struct String* uri;
    struct IRemotingTypeInfo* typeInfo;
    struct IEnvoyInfo* envoyInfo;
    int32_t flags;
    struct Type* _serverType;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjRef__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjRef__Fields_FWDDECL
#include <Modloader/app/structs/IChannelInfo.h>
#include <Modloader/app/structs/IEnvoyInfo.h>
#include <Modloader/app/structs/IRemotingTypeInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ObjRef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRef__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjRef__Fields_FWDDECL)
#include <Modloader/app/structs/ObjRef__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjRef__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
