#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionBinding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionBinding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionBinding__Fields_DEFINED
struct Action;
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_;
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_;
struct __declspec(align(8)) InteractionBinding__Fields {
    struct Action* Action;
    struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_* m_messageProvider;
    float Cost;
    bool m_active;
    struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_* m_resolvedMessageProvider;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionBinding__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionBinding__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IMessageProvider_.h>
#endif
#undef IL2CPP_STRUCT_InteractionBinding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionBinding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionBinding__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionBinding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionBinding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
