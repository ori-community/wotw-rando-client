#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EdgeIterator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EdgeIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeIterator_DEFINED)
#include <Modloader/app/structs/EdgeIterator__Fields.h>
#if defined(IL2CPP_STRUCT_EdgeIterator__Fields_DEFINED)
#define IL2CPP_STRUCT_EdgeIterator_DEFINED
struct EdgeIterator__Class;
struct EdgeIterator {
    struct EdgeIterator__Class* klass;
    MonitorData* monitor;
    struct EdgeIterator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EdgeIterator_FWDDECL)
#define IL2CPP_STRUCT_EdgeIterator_FWDDECL
#include <Modloader/app/structs/EdgeIterator__Class.h>
#endif
#undef IL2CPP_STRUCT_EdgeIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeIterator_DEFINED) && !defined(IL2CPP_STRUCT_EdgeIterator_FWDDECL)
#include <Modloader/app/structs/EdgeIterator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EdgeIterator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
