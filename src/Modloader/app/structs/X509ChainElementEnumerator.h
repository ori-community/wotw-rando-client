#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainElementEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainElementEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElementEnumerator_DEFINED)
#include <Modloader/app/structs/X509ChainElementEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_X509ChainElementEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ChainElementEnumerator_DEFINED
struct X509ChainElementEnumerator__Class;
struct X509ChainElementEnumerator {
    struct X509ChainElementEnumerator__Class* klass;
    MonitorData* monitor;
    struct X509ChainElementEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainElementEnumerator_FWDDECL)
#define IL2CPP_STRUCT_X509ChainElementEnumerator_FWDDECL
#include <Modloader/app/structs/X509ChainElementEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainElementEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElementEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainElementEnumerator_FWDDECL)
#include <Modloader/app/structs/X509ChainElementEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainElementEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
