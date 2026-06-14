#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utility__StaticFields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_Utility__StaticFields_DEFINED
struct Utility__StaticFields {
    struct Bounds s_tempBounds;
    bool m_isQuitting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Utility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Utility__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Utility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Utility__StaticFields_FWDDECL)
#include <Modloader/app/structs/Utility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
