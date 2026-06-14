#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlStreamChars_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlStreamChars_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlStreamChars_DEFINED)
#define IL2CPP_STRUCT_SqlStreamChars_DEFINED
struct SqlStreamChars__Class;
struct SqlStreamChars {
    struct SqlStreamChars__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlStreamChars_FWDDECL)
#define IL2CPP_STRUCT_SqlStreamChars_FWDDECL
#include <Modloader/app/structs/SqlStreamChars__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlStreamChars_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlStreamChars_DEFINED) && !defined(IL2CPP_STRUCT_SqlStreamChars_FWDDECL)
#include <Modloader/app/structs/SqlStreamChars.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlStreamChars.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
