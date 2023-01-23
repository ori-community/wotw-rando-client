#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_DEFINED
struct String;
struct IDebugMenuPage;
struct HierarchyDebugMenuPage__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_name;
    struct IDebugMenuPage* _Page_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_FWDDECL
#include <Modloader/app/structs/IDebugMenuPage.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyDebugMenuPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyDebugMenuPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
