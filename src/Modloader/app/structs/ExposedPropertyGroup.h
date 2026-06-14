#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExposedPropertyGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExposedPropertyGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedPropertyGroup_DEFINED)
#include <Modloader/app/structs/ExposedPropertyGroup__Fields.h>
#if defined(IL2CPP_STRUCT_ExposedPropertyGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_ExposedPropertyGroup_DEFINED
struct ExposedPropertyGroup__Class;
struct ExposedPropertyGroup {
    struct ExposedPropertyGroup__Class* klass;
    MonitorData* monitor;
    struct ExposedPropertyGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExposedPropertyGroup_FWDDECL)
#define IL2CPP_STRUCT_ExposedPropertyGroup_FWDDECL
#include <Modloader/app/structs/ExposedPropertyGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_ExposedPropertyGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedPropertyGroup_DEFINED) && !defined(IL2CPP_STRUCT_ExposedPropertyGroup_FWDDECL)
#include <Modloader/app/structs/ExposedPropertyGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExposedPropertyGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
