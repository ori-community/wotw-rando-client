#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgumentException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgumentException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentException_DEFINED)
#include <Modloader/app/structs/ArgumentException__Fields.h>
#if defined(IL2CPP_STRUCT_ArgumentException__Fields_DEFINED)
#define IL2CPP_STRUCT_ArgumentException_DEFINED
struct ArgumentException__Class;
struct ArgumentException {
    struct ArgumentException__Class* klass;
    MonitorData* monitor;
    struct ArgumentException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArgumentException_FWDDECL)
#define IL2CPP_STRUCT_ArgumentException_FWDDECL
#include <Modloader/app/structs/ArgumentException__Class.h>
#endif
#undef IL2CPP_STRUCT_ArgumentException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentException_DEFINED) && !defined(IL2CPP_STRUCT_ArgumentException_FWDDECL)
#include <Modloader/app/structs/ArgumentException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgumentException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
