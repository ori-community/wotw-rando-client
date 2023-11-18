#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComicBook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComicBook_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComicBook_DEFINED)
#include <Modloader/app/structs/ComicBook__Fields.h>
#if defined(IL2CPP_STRUCT_ComicBook__Fields_DEFINED)
#define IL2CPP_STRUCT_ComicBook_DEFINED
struct ComicBook__Class;
struct ComicBook {
    struct ComicBook__Class* klass;
    MonitorData* monitor;
    struct ComicBook__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComicBook_FWDDECL)
#define IL2CPP_STRUCT_ComicBook_FWDDECL
#include <Modloader/app/structs/ComicBook__Class.h>
#endif
#undef IL2CPP_STRUCT_ComicBook_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComicBook_DEFINED) && !defined(IL2CPP_STRUCT_ComicBook_FWDDECL)
#include <Modloader/app/structs/ComicBook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComicBook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
