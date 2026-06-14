#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BubblemakerBlocked_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BubblemakerBlocked_INITIALIZING
#if !defined(IL2CPP_STRUCT_BubblemakerBlocked_DEFINED)
#include <Modloader/app/structs/BubblemakerBlocked__Fields.h>
#if defined(IL2CPP_STRUCT_BubblemakerBlocked__Fields_DEFINED)
#define IL2CPP_STRUCT_BubblemakerBlocked_DEFINED
struct BubblemakerBlocked__Class;
struct BubblemakerBlocked {
    struct BubblemakerBlocked__Class* klass;
    MonitorData* monitor;
    struct BubblemakerBlocked__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BubblemakerBlocked_FWDDECL)
#define IL2CPP_STRUCT_BubblemakerBlocked_FWDDECL
#include <Modloader/app/structs/BubblemakerBlocked__Class.h>
#endif
#undef IL2CPP_STRUCT_BubblemakerBlocked_INITIALIZING
#if !defined(IL2CPP_STRUCT_BubblemakerBlocked_DEFINED) && !defined(IL2CPP_STRUCT_BubblemakerBlocked_FWDDECL)
#include <Modloader/app/structs/BubblemakerBlocked.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BubblemakerBlocked.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
