#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageProvider__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageProvider__Fields_DEFINED
struct String__Array;
struct MessageProvider__Fields {
    struct ScriptableObject__Fields _;
    struct String__Array* m_messages;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageProvider__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_MessageProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageProvider__Fields_FWDDECL)
#include <Modloader/app/structs/MessageProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
