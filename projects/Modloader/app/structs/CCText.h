#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCText_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCText_DEFINED)
#include <Modloader/app/structs/CCText__Fields.h>
#if defined(IL2CPP_STRUCT_CCText__Fields_DEFINED)
#define IL2CPP_STRUCT_CCText_DEFINED
struct CCText__Class;
struct CCText {
    struct CCText__Class* klass;
    MonitorData* monitor;
    struct CCText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCText_FWDDECL)
#define IL2CPP_STRUCT_CCText_FWDDECL
#include <Modloader/app/structs/CCText__Class.h>
#endif
#undef IL2CPP_STRUCT_CCText_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCText_DEFINED) && !defined(IL2CPP_STRUCT_CCText_FWDDECL)
#include <Modloader/app/structs/CCText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
