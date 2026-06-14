#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutOfMemoryException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutOfMemoryException_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutOfMemoryException_DEFINED)
#include <Modloader/app/structs/OutOfMemoryException__Fields.h>
#if defined(IL2CPP_STRUCT_OutOfMemoryException__Fields_DEFINED)
#define IL2CPP_STRUCT_OutOfMemoryException_DEFINED
struct OutOfMemoryException__Class;
struct OutOfMemoryException {
    struct OutOfMemoryException__Class* klass;
    MonitorData* monitor;
    struct OutOfMemoryException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OutOfMemoryException_FWDDECL)
#define IL2CPP_STRUCT_OutOfMemoryException_FWDDECL
#include <Modloader/app/structs/OutOfMemoryException__Class.h>
#endif
#undef IL2CPP_STRUCT_OutOfMemoryException_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutOfMemoryException_DEFINED) && !defined(IL2CPP_STRUCT_OutOfMemoryException_FWDDECL)
#include <Modloader/app/structs/OutOfMemoryException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutOfMemoryException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
