#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgumentOutOfRangeException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgumentOutOfRangeException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException_DEFINED)
#include <Modloader/app/structs/ArgumentOutOfRangeException__Fields.h>
#if defined(IL2CPP_STRUCT_ArgumentOutOfRangeException__Fields_DEFINED)
#define IL2CPP_STRUCT_ArgumentOutOfRangeException_DEFINED
struct ArgumentOutOfRangeException__Class;
struct ArgumentOutOfRangeException {
    struct ArgumentOutOfRangeException__Class* klass;
    MonitorData* monitor;
    struct ArgumentOutOfRangeException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException_FWDDECL)
#define IL2CPP_STRUCT_ArgumentOutOfRangeException_FWDDECL
#include <Modloader/app/structs/ArgumentOutOfRangeException__Class.h>
#endif
#undef IL2CPP_STRUCT_ArgumentOutOfRangeException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException_DEFINED) && !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException_FWDDECL)
#include <Modloader/app/structs/ArgumentOutOfRangeException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgumentOutOfRangeException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
