#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadStateException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadStateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadStateException_DEFINED)
#include <Modloader/app/structs/ThreadStateException__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadStateException__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadStateException_DEFINED
struct ThreadStateException__Class;
struct ThreadStateException {
    struct ThreadStateException__Class* klass;
    MonitorData* monitor;
    struct ThreadStateException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadStateException_FWDDECL)
#define IL2CPP_STRUCT_ThreadStateException_FWDDECL
#include <Modloader/app/structs/ThreadStateException__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadStateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadStateException_DEFINED) && !defined(IL2CPP_STRUCT_ThreadStateException_FWDDECL)
#include <Modloader/app/structs/ThreadStateException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadStateException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
