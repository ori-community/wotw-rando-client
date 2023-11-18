#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeIdentifiers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeIdentifiers_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIdentifiers_DEFINED)
#define IL2CPP_STRUCT_TypeIdentifiers_DEFINED
struct TypeIdentifiers__Class;
struct TypeIdentifiers {
    struct TypeIdentifiers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeIdentifiers_FWDDECL)
#define IL2CPP_STRUCT_TypeIdentifiers_FWDDECL
#include <Modloader/app/structs/TypeIdentifiers__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeIdentifiers_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIdentifiers_DEFINED) && !defined(IL2CPP_STRUCT_TypeIdentifiers_FWDDECL)
#include <Modloader/app/structs/TypeIdentifiers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeIdentifiers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
