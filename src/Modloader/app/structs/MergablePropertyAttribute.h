#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MergablePropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MergablePropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MergablePropertyAttribute_DEFINED)
#include <Modloader/app/structs/MergablePropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MergablePropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MergablePropertyAttribute_DEFINED
struct MergablePropertyAttribute__Class;
struct MergablePropertyAttribute {
    struct MergablePropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct MergablePropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MergablePropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_MergablePropertyAttribute_FWDDECL
#include <Modloader/app/structs/MergablePropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MergablePropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MergablePropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MergablePropertyAttribute_FWDDECL)
#include <Modloader/app/structs/MergablePropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MergablePropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
