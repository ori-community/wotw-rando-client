#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNode__Fields_DEFINED)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageNode__Fields_DEFINED
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_;
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_;
struct MessageNode__Fields {
    struct InteractionNode__Fields _;
    struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_* Message;
    struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_* m_resolvedMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageNode__Fields_FWDDECL
#include <Modloader/app/structs/MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IMessageProvider_.h>
#endif
#undef IL2CPP_STRUCT_MessageNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageNode__Fields_FWDDECL)
#include <Modloader/app/structs/MessageNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
