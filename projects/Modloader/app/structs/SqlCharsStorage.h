#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlCharsStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlCharsStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlCharsStorage_DEFINED)
#include <Modloader/app/structs/SqlCharsStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlCharsStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlCharsStorage_DEFINED
struct SqlCharsStorage__Class;
struct SqlCharsStorage {
    struct SqlCharsStorage__Class* klass;
    MonitorData* monitor;
    struct SqlCharsStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlCharsStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlCharsStorage_FWDDECL
#include <Modloader/app/structs/SqlCharsStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlCharsStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlCharsStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlCharsStorage_FWDDECL)
#include <Modloader/app/structs/SqlCharsStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlCharsStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
