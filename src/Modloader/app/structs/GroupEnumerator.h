#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupEnumerator_DEFINED)
#include <Modloader/app/structs/GroupEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_GroupEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupEnumerator_DEFINED
struct GroupEnumerator__Class;
struct GroupEnumerator {
    struct GroupEnumerator__Class* klass;
    MonitorData* monitor;
    struct GroupEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupEnumerator_FWDDECL)
#define IL2CPP_STRUCT_GroupEnumerator_FWDDECL
#include <Modloader/app/structs/GroupEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_GroupEnumerator_FWDDECL)
#include <Modloader/app/structs/GroupEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
