#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabPlaceholderGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabPlaceholderGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholderGroup_DEFINED)
#include <Modloader/app/structs/CrabPlaceholderGroup__Fields.h>
#if defined(IL2CPP_STRUCT_CrabPlaceholderGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabPlaceholderGroup_DEFINED
struct CrabPlaceholderGroup__Class;
struct CrabPlaceholderGroup {
    struct CrabPlaceholderGroup__Class* klass;
    MonitorData* monitor;
    struct CrabPlaceholderGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabPlaceholderGroup_FWDDECL)
#define IL2CPP_STRUCT_CrabPlaceholderGroup_FWDDECL
#include <Modloader/app/structs/CrabPlaceholderGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_CrabPlaceholderGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholderGroup_DEFINED) && !defined(IL2CPP_STRUCT_CrabPlaceholderGroup_FWDDECL)
#include <Modloader/app/structs/CrabPlaceholderGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabPlaceholderGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
