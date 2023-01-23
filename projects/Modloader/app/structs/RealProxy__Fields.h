#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RealProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RealProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RealProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_RealProxy__Fields_DEFINED
struct Type;
struct Context;
struct MarshalByRefObject;
struct String;
struct Identity;
struct Object;
struct __declspec(align(8)) RealProxy__Fields {
    struct Type* class_to_proxy;
    struct Context* _targetContext;
    struct MarshalByRefObject* _server;
    int32_t _targetDomainId;
    struct String* _targetUri;
    struct Identity* _objectIdentity;
    struct Object* _objTP;
    struct Object* _stubData;
};
#endif
#if !defined(IL2CPP_STRUCT_RealProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_RealProxy__Fields_FWDDECL
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_RealProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RealProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RealProxy__Fields_FWDDECL)
#include <Modloader/app/structs/RealProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RealProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
