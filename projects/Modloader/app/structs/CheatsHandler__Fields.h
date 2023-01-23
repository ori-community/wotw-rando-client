#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheatsHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheatsHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheatsHandler__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_CheatsHandler__Fields_DEFINED
struct List_1_Cheat_;
struct CheatsHandler__Fields {
    struct SaveSerialize__Fields _;
    bool DebugEnabled;
    struct List_1_Cheat_* m_cheats;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheatsHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_CheatsHandler__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Cheat_.h>
#endif
#undef IL2CPP_STRUCT_CheatsHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheatsHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CheatsHandler__Fields_FWDDECL)
#include <Modloader/app/structs/CheatsHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheatsHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
