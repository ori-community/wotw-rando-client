#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexTree_DEFINED)
#include <Modloader/app/structs/RegexTree__Fields.h>
#if defined(IL2CPP_STRUCT_RegexTree__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexTree_DEFINED
struct RegexTree__Class;
struct RegexTree {
    struct RegexTree__Class* klass;
    MonitorData* monitor;
    struct RegexTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexTree_FWDDECL)
#define IL2CPP_STRUCT_RegexTree_FWDDECL
#include <Modloader/app/structs/RegexTree__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexTree_DEFINED) && !defined(IL2CPP_STRUCT_RegexTree_FWDDECL)
#include <Modloader/app/structs/RegexTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
