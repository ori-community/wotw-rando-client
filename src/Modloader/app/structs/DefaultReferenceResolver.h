#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultReferenceResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultReferenceResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultReferenceResolver_DEFINED)
#include <Modloader/app/structs/DefaultReferenceResolver__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultReferenceResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultReferenceResolver_DEFINED
struct DefaultReferenceResolver__Class;
struct DefaultReferenceResolver {
    struct DefaultReferenceResolver__Class* klass;
    MonitorData* monitor;
    struct DefaultReferenceResolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultReferenceResolver_FWDDECL)
#define IL2CPP_STRUCT_DefaultReferenceResolver_FWDDECL
#include <Modloader/app/structs/DefaultReferenceResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultReferenceResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultReferenceResolver_DEFINED) && !defined(IL2CPP_STRUCT_DefaultReferenceResolver_FWDDECL)
#include <Modloader/app/structs/DefaultReferenceResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultReferenceResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
