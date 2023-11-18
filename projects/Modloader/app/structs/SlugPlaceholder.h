#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugPlaceholder_DEFINED)
#include <Modloader/app/structs/SlugPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SlugPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugPlaceholder_DEFINED
struct SlugPlaceholder__Class;
struct SlugPlaceholder {
    struct SlugPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SlugPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SlugPlaceholder_FWDDECL
#include <Modloader/app/structs/SlugPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SlugPlaceholder_FWDDECL)
#include <Modloader/app/structs/SlugPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
