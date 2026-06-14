#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExposedPropertyGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExposedPropertyGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedPropertyGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_ExposedPropertyGroup__Fields_DEFINED
struct String;
struct List_1_System_Int32_;
struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty_;
struct __declspec(align(8)) ExposedPropertyGroup__Fields {
    struct String* Name;
    struct List_1_System_Int32_* PropertyIds;
    bool Visible;
    struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty_* Properties;
};
#endif
#if !defined(IL2CPP_STRUCT_ExposedPropertyGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExposedPropertyGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ExposedPropertiesInspector_ExposedProperty_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExposedPropertyGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedPropertyGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExposedPropertyGroup__Fields_FWDDECL)
#include <Modloader/app/structs/ExposedPropertyGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExposedPropertyGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
