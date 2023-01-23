#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostIndicatorManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostIndicatorManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicatorManager__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostIndicatorManager__Fields_DEFINED
struct GameObject;
struct GameObject__Array;
struct __declspec(align(8)) GhostIndicatorManager__Fields {
    struct GameObject* m_indicator;
    struct GameObject__Array* m_indicatorInstances;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostIndicatorManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostIndicatorManager__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#endif
#undef IL2CPP_STRUCT_GhostIndicatorManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicatorManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostIndicatorManager__Fields_FWDDECL)
#include <Modloader/app/structs/GhostIndicatorManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostIndicatorManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
