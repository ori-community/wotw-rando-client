#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCFont_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCFont_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont_DEFINED)
#include <Modloader/app/structs/CCFont__Fields.h>
#if defined(IL2CPP_STRUCT_CCFont__Fields_DEFINED)
#define IL2CPP_STRUCT_CCFont_DEFINED
struct CCFont__Class;
struct CCFont {
    struct CCFont__Class* klass;
    MonitorData* monitor;
    struct CCFont__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCFont_FWDDECL)
#define IL2CPP_STRUCT_CCFont_FWDDECL
#include <Modloader/app/structs/CCFont__Class.h>
#endif
#undef IL2CPP_STRUCT_CCFont_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont_DEFINED) && !defined(IL2CPP_STRUCT_CCFont_FWDDECL)
#include <Modloader/app/structs/CCFont.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCFont.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
