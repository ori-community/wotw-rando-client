#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokTempLegStretch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokTempLegStretch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTempLegStretch__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokTempLegStretch__Fields_DEFINED
struct Transform;
struct KwolokTempLegStretch__Fields {
    struct MonoBehaviour__Fields _;
    bool changeB;
    float Scale;
    struct Transform* PointA;
    struct Transform* PointB;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokTempLegStretch__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokTempLegStretch__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokTempLegStretch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTempLegStretch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokTempLegStretch__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokTempLegStretch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokTempLegStretch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
