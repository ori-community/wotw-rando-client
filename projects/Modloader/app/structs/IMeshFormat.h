#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMeshFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMeshFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMeshFormat_DEFINED)
#define IL2CPP_STRUCT_IMeshFormat_DEFINED
struct IMeshFormat__Class;
struct IMeshFormat {
    struct IMeshFormat__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMeshFormat_FWDDECL)
#define IL2CPP_STRUCT_IMeshFormat_FWDDECL
#include <Modloader/app/structs/IMeshFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_IMeshFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMeshFormat_DEFINED) && !defined(IL2CPP_STRUCT_IMeshFormat_FWDDECL)
#include <Modloader/app/structs/IMeshFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMeshFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
