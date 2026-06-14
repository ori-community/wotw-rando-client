#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_DEFINED)
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceReader_ResourceEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_DEFINED
struct ResourceReader_ResourceEnumerator__Class;
struct ResourceReader_ResourceEnumerator {
    struct ResourceReader_ResourceEnumerator__Class* klass;
    MonitorData* monitor;
    struct ResourceReader_ResourceEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_FWDDECL)
#define IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_FWDDECL
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_ResourceReader_ResourceEnumerator_FWDDECL)
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
