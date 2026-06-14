#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectHolderListEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectHolderListEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolderListEnumerator_DEFINED)
#include <Modloader/app/structs/ObjectHolderListEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectHolderListEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectHolderListEnumerator_DEFINED
struct ObjectHolderListEnumerator__Class;
struct ObjectHolderListEnumerator {
    struct ObjectHolderListEnumerator__Class* klass;
    MonitorData* monitor;
    struct ObjectHolderListEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectHolderListEnumerator_FWDDECL)
#define IL2CPP_STRUCT_ObjectHolderListEnumerator_FWDDECL
#include <Modloader/app/structs/ObjectHolderListEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectHolderListEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolderListEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_ObjectHolderListEnumerator_FWDDECL)
#include <Modloader/app/structs/ObjectHolderListEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectHolderListEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
