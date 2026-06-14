#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesignerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesignerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignerAttribute_DEFINED)
#include <Modloader/app/structs/DesignerAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DesignerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DesignerAttribute_DEFINED
struct DesignerAttribute__Class;
struct DesignerAttribute {
    struct DesignerAttribute__Class* klass;
    MonitorData* monitor;
    struct DesignerAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesignerAttribute_FWDDECL)
#define IL2CPP_STRUCT_DesignerAttribute_FWDDECL
#include <Modloader/app/structs/DesignerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DesignerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DesignerAttribute_FWDDECL)
#include <Modloader/app/structs/DesignerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesignerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
