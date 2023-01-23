#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOException_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOException_DEFINED)
#include <Modloader/app/structs/IOException__Fields.h>
#if defined(IL2CPP_STRUCT_IOException__Fields_DEFINED)
#define IL2CPP_STRUCT_IOException_DEFINED
struct IOException__Class;
struct IOException {
    struct IOException__Class* klass;
    MonitorData* monitor;
    struct IOException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IOException_FWDDECL)
#define IL2CPP_STRUCT_IOException_FWDDECL
#include <Modloader/app/structs/IOException__Class.h>
#endif
#undef IL2CPP_STRUCT_IOException_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOException_DEFINED) && !defined(IL2CPP_STRUCT_IOException_FWDDECL)
#include <Modloader/app/structs/IOException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
