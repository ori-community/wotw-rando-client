#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaceholderGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaceholderGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceholderGroup_DEFINED)
#include <Modloader/app/structs/PlaceholderGroup__Fields.h>
#if defined(IL2CPP_STRUCT_PlaceholderGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaceholderGroup_DEFINED
struct PlaceholderGroup__Class;
struct PlaceholderGroup {
    struct PlaceholderGroup__Class* klass;
    MonitorData* monitor;
    struct PlaceholderGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaceholderGroup_FWDDECL)
#define IL2CPP_STRUCT_PlaceholderGroup_FWDDECL
#include <Modloader/app/structs/PlaceholderGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaceholderGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceholderGroup_DEFINED) && !defined(IL2CPP_STRUCT_PlaceholderGroup_FWDDECL)
#include <Modloader/app/structs/PlaceholderGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaceholderGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
