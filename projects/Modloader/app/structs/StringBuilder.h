#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilder_DEFINED)
#include <Modloader/app/structs/StringBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_StringBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_StringBuilder_DEFINED
struct StringBuilder__Class;
struct StringBuilder {
    struct StringBuilder__Class* klass;
    MonitorData* monitor;
    struct StringBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringBuilder_FWDDECL)
#define IL2CPP_STRUCT_StringBuilder_FWDDECL
#include <Modloader/app/structs/StringBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_StringBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilder_DEFINED) && !defined(IL2CPP_STRUCT_StringBuilder_FWDDECL)
#include <Modloader/app/structs/StringBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
