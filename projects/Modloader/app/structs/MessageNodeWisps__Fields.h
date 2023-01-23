#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageNodeWisps__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNodeWisps__Fields_DEFINED)
#include <Modloader/app/structs/MessageNode__Fields.h>
#if defined(IL2CPP_STRUCT_MessageNode__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageNodeWisps__Fields_DEFINED
struct NPCMessageBoxWrapper;
struct MessageNodeWisps__Fields {
    struct MessageNode__Fields _;
    struct NPCMessageBoxWrapper* m_messsageBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageNodeWisps__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageNodeWisps__Fields_FWDDECL
#include <Modloader/app/structs/NPCMessageBoxWrapper.h>
#endif
#undef IL2CPP_STRUCT_MessageNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNodeWisps__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageNodeWisps__Fields_FWDDECL)
#include <Modloader/app/structs/MessageNodeWisps__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageNodeWisps__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
