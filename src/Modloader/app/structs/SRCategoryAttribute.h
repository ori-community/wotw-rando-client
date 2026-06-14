#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SRCategoryAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SRCategoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SRCategoryAttribute_DEFINED)
#include <Modloader/app/structs/SRCategoryAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SRCategoryAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SRCategoryAttribute_DEFINED
struct SRCategoryAttribute__Class;
struct SRCategoryAttribute {
    struct SRCategoryAttribute__Class* klass;
    MonitorData* monitor;
    struct SRCategoryAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SRCategoryAttribute_FWDDECL)
#define IL2CPP_STRUCT_SRCategoryAttribute_FWDDECL
#include <Modloader/app/structs/SRCategoryAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SRCategoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SRCategoryAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SRCategoryAttribute_FWDDECL)
#include <Modloader/app/structs/SRCategoryAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SRCategoryAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
