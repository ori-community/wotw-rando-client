#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RopeReeler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RopeReeler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeReeler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RopeReeler__Fields_DEFINED
struct Rope;
struct RopeReeler__Fields {
    struct MonoBehaviour__Fields _;
    struct Rope* Rope;
    float _LastLinkPercentage_k__BackingField;
    int32_t m_linkIndex;
    float m_distBetweenLinks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RopeReeler__Fields_FWDDECL)
#define IL2CPP_STRUCT_RopeReeler__Fields_FWDDECL
#include <Modloader/app/structs/Rope.h>
#endif
#undef IL2CPP_STRUCT_RopeReeler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeReeler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RopeReeler__Fields_FWDDECL)
#include <Modloader/app/structs/RopeReeler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RopeReeler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
