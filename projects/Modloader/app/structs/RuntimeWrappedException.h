#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeWrappedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeWrappedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeWrappedException_DEFINED)
#include <Modloader/app/structs/RuntimeWrappedException__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeWrappedException__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeWrappedException_DEFINED
struct RuntimeWrappedException__Class;
struct RuntimeWrappedException {
    struct RuntimeWrappedException__Class* klass;
    MonitorData* monitor;
    struct RuntimeWrappedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeWrappedException_FWDDECL)
#define IL2CPP_STRUCT_RuntimeWrappedException_FWDDECL
#include <Modloader/app/structs/RuntimeWrappedException__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeWrappedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeWrappedException_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeWrappedException_FWDDECL)
#include <Modloader/app/structs/RuntimeWrappedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeWrappedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
