#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeInitializationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeInitializationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInitializationException_DEFINED)
#include <Modloader/app/structs/TypeInitializationException__Fields.h>
#if defined(IL2CPP_STRUCT_TypeInitializationException__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeInitializationException_DEFINED
struct TypeInitializationException__Class;
struct TypeInitializationException {
    struct TypeInitializationException__Class* klass;
    MonitorData* monitor;
    struct TypeInitializationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeInitializationException_FWDDECL)
#define IL2CPP_STRUCT_TypeInitializationException_FWDDECL
#include <Modloader/app/structs/TypeInitializationException__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeInitializationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInitializationException_DEFINED) && !defined(IL2CPP_STRUCT_TypeInitializationException_FWDDECL)
#include <Modloader/app/structs/TypeInitializationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeInitializationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
