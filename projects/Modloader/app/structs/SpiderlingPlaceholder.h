#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingPlaceholder_DEFINED)
#include <Modloader/app/structs/SpiderlingPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderlingPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderlingPlaceholder_DEFINED
struct SpiderlingPlaceholder__Class;
struct SpiderlingPlaceholder {
    struct SpiderlingPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SpiderlingPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingPlaceholder_FWDDECL
#include <Modloader/app/structs/SpiderlingPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingPlaceholder_FWDDECL)
#include <Modloader/app/structs/SpiderlingPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
