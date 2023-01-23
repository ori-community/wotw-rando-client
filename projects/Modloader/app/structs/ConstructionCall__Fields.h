#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstructionCall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstructionCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionCall__Fields_DEFINED)
#include <Modloader/app/structs/MethodCall__Fields.h>
#if defined(IL2CPP_STRUCT_MethodCall__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstructionCall__Fields_DEFINED
struct IActivator;
struct Object__Array;
struct IList;
struct Type;
struct String;
struct RemotingProxy;
struct ConstructionCall__Fields {
    struct MethodCall__Fields _;
    struct IActivator* _activator;
    struct Object__Array* _activationAttributes;
    struct IList* _contextProperties;
    struct Type* _activationType;
    struct String* _activationTypeName;
    bool _isContextOk;
    struct RemotingProxy* _sourceProxy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstructionCall__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstructionCall__Fields_FWDDECL
#include <Modloader/app/structs/IActivator.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RemotingProxy.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ConstructionCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionCall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstructionCall__Fields_FWDDECL)
#include <Modloader/app/structs/ConstructionCall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstructionCall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
