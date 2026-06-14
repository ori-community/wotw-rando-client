#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedReference_DEFINED)
#include <Modloader/app/structs/SharedReference__Fields.h>
#if defined(IL2CPP_STRUCT_SharedReference__Fields_DEFINED)
#define IL2CPP_STRUCT_SharedReference_DEFINED
struct SharedReference__Class;
struct SharedReference {
    struct SharedReference__Class* klass;
    MonitorData* monitor;
    struct SharedReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SharedReference_FWDDECL)
#define IL2CPP_STRUCT_SharedReference_FWDDECL
#include <Modloader/app/structs/SharedReference__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedReference_DEFINED) && !defined(IL2CPP_STRUCT_SharedReference_FWDDECL)
#include <Modloader/app/structs/SharedReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
