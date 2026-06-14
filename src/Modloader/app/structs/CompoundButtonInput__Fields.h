#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundButtonInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundButtonInput__Fields_DEFINED)
#include <Modloader/app/structs/CachedButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_CachedButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundButtonInput__Fields_DEFINED
struct List_1_SmartInput_IButtonInput_;
struct CompoundButtonInput__Fields {
    struct CachedButtonInput__Fields _;
    struct List_1_SmartInput_IButtonInput_* Buttons;
    int32_t m_lastPressedIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundButtonInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompoundButtonInput__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SmartInput_IButtonInput_.h>
#endif
#undef IL2CPP_STRUCT_CompoundButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundButtonInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompoundButtonInput__Fields_FWDDECL)
#include <Modloader/app/structs/CompoundButtonInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundButtonInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
