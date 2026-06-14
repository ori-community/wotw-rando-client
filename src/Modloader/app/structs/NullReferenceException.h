#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NullReferenceException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NullReferenceException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullReferenceException_DEFINED)
#include <Modloader/app/structs/NullReferenceException__Fields.h>
#if defined(IL2CPP_STRUCT_NullReferenceException__Fields_DEFINED)
#define IL2CPP_STRUCT_NullReferenceException_DEFINED
struct NullReferenceException__Class;
struct NullReferenceException {
    struct NullReferenceException__Class* klass;
    MonitorData* monitor;
    struct NullReferenceException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NullReferenceException_FWDDECL)
#define IL2CPP_STRUCT_NullReferenceException_FWDDECL
#include <Modloader/app/structs/NullReferenceException__Class.h>
#endif
#undef IL2CPP_STRUCT_NullReferenceException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullReferenceException_DEFINED) && !defined(IL2CPP_STRUCT_NullReferenceException_FWDDECL)
#include <Modloader/app/structs/NullReferenceException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NullReferenceException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
