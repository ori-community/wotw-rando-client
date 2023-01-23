#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TogglePlaymodeTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TogglePlaymodeTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TogglePlaymodeTask__Fields_DEFINED)
#include <Modloader/app/structs/SimpleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TogglePlaymodeTask__Fields_DEFINED
struct TogglePlaymodeTask__Fields {
    struct SimpleTask__Fields _;
    bool m_playmodeState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TogglePlaymodeTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TogglePlaymodeTask__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TogglePlaymodeTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TogglePlaymodeTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TogglePlaymodeTask__Fields_FWDDECL)
#include <Modloader/app/structs/TogglePlaymodeTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TogglePlaymodeTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
