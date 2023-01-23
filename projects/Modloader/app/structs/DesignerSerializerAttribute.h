#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesignerSerializerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesignerSerializerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignerSerializerAttribute_DEFINED)
#include <Modloader/app/structs/DesignerSerializerAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DesignerSerializerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DesignerSerializerAttribute_DEFINED
struct DesignerSerializerAttribute__Class;
struct DesignerSerializerAttribute {
    struct DesignerSerializerAttribute__Class* klass;
    MonitorData* monitor;
    struct DesignerSerializerAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesignerSerializerAttribute_FWDDECL)
#define IL2CPP_STRUCT_DesignerSerializerAttribute_FWDDECL
#include <Modloader/app/structs/DesignerSerializerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DesignerSerializerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignerSerializerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DesignerSerializerAttribute_FWDDECL)
#include <Modloader/app/structs/DesignerSerializerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesignerSerializerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
