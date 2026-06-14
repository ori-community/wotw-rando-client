#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_DEFINED
struct GameWorldArea;
struct RuntimeGameWorldArea;
struct HasVisitedOrDiscoveredAreaCondition__Fields {
    struct Condition_1__Fields _;
    struct GameWorldArea* Area;
    bool Visited;
    struct RuntimeGameWorldArea* m_area;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_FWDDECL
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#endif
#undef IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HasVisitedOrDiscoveredAreaCondition__Fields_FWDDECL)
#include <Modloader/app/structs/HasVisitedOrDiscoveredAreaCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasVisitedOrDiscoveredAreaCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
