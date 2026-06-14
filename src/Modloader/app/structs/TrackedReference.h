#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackedReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackedReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackedReference_DEFINED)
#include <Modloader/app/structs/TrackedReference__Fields.h>
#if defined(IL2CPP_STRUCT_TrackedReference__Fields_DEFINED)
#define IL2CPP_STRUCT_TrackedReference_DEFINED
struct TrackedReference__Class;
struct TrackedReference {
    struct TrackedReference__Class* klass;
    MonitorData* monitor;
    struct TrackedReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrackedReference_FWDDECL)
#define IL2CPP_STRUCT_TrackedReference_FWDDECL
#include <Modloader/app/structs/TrackedReference__Class.h>
#endif
#undef IL2CPP_STRUCT_TrackedReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackedReference_DEFINED) && !defined(IL2CPP_STRUCT_TrackedReference_FWDDECL)
#include <Modloader/app/structs/TrackedReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackedReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
