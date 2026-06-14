#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_DEFINED
struct Type;
struct ObjRefSurrogate;
struct RemotingSurrogate;
struct RemotingSurrogateSelector__StaticFields {
    struct Type* s_cachedTypeObjRef;
    struct ObjRefSurrogate* _objRefSurrogate;
    struct RemotingSurrogate* _objRemotingSurrogate;
};
#endif
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_FWDDECL
#include <Modloader/app/structs/ObjRefSurrogate.h>
#include <Modloader/app/structs/RemotingSurrogate.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RemotingSurrogateSelector__StaticFields_FWDDECL)
#include <Modloader/app/structs/RemotingSurrogateSelector__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingSurrogateSelector__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
