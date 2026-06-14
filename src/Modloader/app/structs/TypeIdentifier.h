#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeIdentifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIdentifier_DEFINED)
#define IL2CPP_STRUCT_TypeIdentifier_DEFINED
struct TypeIdentifier__Class;
struct TypeIdentifier {
    struct TypeIdentifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeIdentifier_FWDDECL)
#define IL2CPP_STRUCT_TypeIdentifier_FWDDECL
#include <Modloader/app/structs/TypeIdentifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIdentifier_DEFINED) && !defined(IL2CPP_STRUCT_TypeIdentifier_FWDDECL)
#include <Modloader/app/structs/TypeIdentifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeIdentifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
