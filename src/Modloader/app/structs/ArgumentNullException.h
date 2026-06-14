#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgumentNullException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgumentNullException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentNullException_DEFINED)
#include <Modloader/app/structs/ArgumentNullException__Fields.h>
#if defined(IL2CPP_STRUCT_ArgumentNullException__Fields_DEFINED)
#define IL2CPP_STRUCT_ArgumentNullException_DEFINED
struct ArgumentNullException__Class;
struct ArgumentNullException {
    struct ArgumentNullException__Class* klass;
    MonitorData* monitor;
    struct ArgumentNullException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArgumentNullException_FWDDECL)
#define IL2CPP_STRUCT_ArgumentNullException_FWDDECL
#include <Modloader/app/structs/ArgumentNullException__Class.h>
#endif
#undef IL2CPP_STRUCT_ArgumentNullException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentNullException_DEFINED) && !defined(IL2CPP_STRUCT_ArgumentNullException_FWDDECL)
#include <Modloader/app/structs/ArgumentNullException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgumentNullException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
