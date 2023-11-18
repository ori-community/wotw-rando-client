#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesignerCategoryAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesignerCategoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignerCategoryAttribute_DEFINED)
#include <Modloader/app/structs/DesignerCategoryAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DesignerCategoryAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DesignerCategoryAttribute_DEFINED
struct DesignerCategoryAttribute__Class;
struct DesignerCategoryAttribute {
    struct DesignerCategoryAttribute__Class* klass;
    MonitorData* monitor;
    struct DesignerCategoryAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesignerCategoryAttribute_FWDDECL)
#define IL2CPP_STRUCT_DesignerCategoryAttribute_FWDDECL
#include <Modloader/app/structs/DesignerCategoryAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DesignerCategoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignerCategoryAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DesignerCategoryAttribute_FWDDECL)
#include <Modloader/app/structs/DesignerCategoryAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesignerCategoryAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
