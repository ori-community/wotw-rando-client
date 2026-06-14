#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundAxisInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundAxisInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundAxisInput__Fields_DEFINED)
#include <Modloader/app/structs/CachedAxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_CachedAxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundAxisInput__Fields_DEFINED
struct IAxisInput__Array;
struct CompoundAxisInput__Fields {
    struct CachedAxisInput__Fields _;
    struct IAxisInput__Array* Axis;
    int32_t m_lastPressedIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundAxisInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompoundAxisInput__Fields_FWDDECL
#include <Modloader/app/structs/IAxisInput__Array.h>
#endif
#undef IL2CPP_STRUCT_CompoundAxisInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundAxisInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompoundAxisInput__Fields_FWDDECL)
#include <Modloader/app/structs/CompoundAxisInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundAxisInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
