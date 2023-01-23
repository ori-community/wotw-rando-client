#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentSizeFitter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentSizeFitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentSizeFitter_DEFINED)
#include <Modloader/app/structs/ContentSizeFitter__Fields.h>
#if defined(IL2CPP_STRUCT_ContentSizeFitter__Fields_DEFINED)
#define IL2CPP_STRUCT_ContentSizeFitter_DEFINED
struct ContentSizeFitter__Class;
struct ContentSizeFitter {
    struct ContentSizeFitter__Class* klass;
    MonitorData* monitor;
    struct ContentSizeFitter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContentSizeFitter_FWDDECL)
#define IL2CPP_STRUCT_ContentSizeFitter_FWDDECL
#include <Modloader/app/structs/ContentSizeFitter__Class.h>
#endif
#undef IL2CPP_STRUCT_ContentSizeFitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentSizeFitter_DEFINED) && !defined(IL2CPP_STRUCT_ContentSizeFitter_FWDDECL)
#include <Modloader/app/structs/ContentSizeFitter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentSizeFitter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
