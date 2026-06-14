#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicHierarchyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicHierarchyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicHierarchyAttribute_DEFINED)
#define IL2CPP_STRUCT_DynamicHierarchyAttribute_DEFINED
struct DynamicHierarchyAttribute__Class;
struct DynamicHierarchyAttribute {
    struct DynamicHierarchyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicHierarchyAttribute_FWDDECL)
#define IL2CPP_STRUCT_DynamicHierarchyAttribute_FWDDECL
#include <Modloader/app/structs/DynamicHierarchyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicHierarchyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicHierarchyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DynamicHierarchyAttribute_FWDDECL)
#include <Modloader/app/structs/DynamicHierarchyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicHierarchyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
