#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageDictionary__Fields_DEFINED
struct IDictionary;
struct IMethodMessage;
struct String__Array;
struct __declspec(align(8)) MessageDictionary__Fields {
    struct IDictionary* _internalProperties;
    struct IMethodMessage* _message;
    struct String__Array* _methodKeys;
    bool _ownProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_MessageDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageDictionary__Fields_FWDDECL
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IMethodMessage.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_MessageDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/MessageDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
