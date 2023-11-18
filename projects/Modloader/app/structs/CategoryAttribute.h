#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CategoryAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CategoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CategoryAttribute_DEFINED)
#include <Modloader/app/structs/CategoryAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CategoryAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_CategoryAttribute_DEFINED
struct CategoryAttribute__Class;
struct CategoryAttribute {
    struct CategoryAttribute__Class* klass;
    MonitorData* monitor;
    struct CategoryAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CategoryAttribute_FWDDECL)
#define IL2CPP_STRUCT_CategoryAttribute_FWDDECL
#include <Modloader/app/structs/CategoryAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CategoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CategoryAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CategoryAttribute_FWDDECL)
#include <Modloader/app/structs/CategoryAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CategoryAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
