#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlChars_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlChars_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlChars_DEFINED)
#include <Modloader/app/structs/SqlChars__Fields.h>
#if defined(IL2CPP_STRUCT_SqlChars__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlChars_DEFINED
struct SqlChars__Class;
struct SqlChars {
    struct SqlChars__Class* klass;
    MonitorData* monitor;
    struct SqlChars__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlChars_FWDDECL)
#define IL2CPP_STRUCT_SqlChars_FWDDECL
#include <Modloader/app/structs/SqlChars__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlChars_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlChars_DEFINED) && !defined(IL2CPP_STRUCT_SqlChars_FWDDECL)
#include <Modloader/app/structs/SqlChars.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlChars.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
