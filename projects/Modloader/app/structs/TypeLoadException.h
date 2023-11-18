#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeLoadException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeLoadException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLoadException_DEFINED)
#include <Modloader/app/structs/TypeLoadException__Fields.h>
#if defined(IL2CPP_STRUCT_TypeLoadException__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeLoadException_DEFINED
struct TypeLoadException__Class;
struct TypeLoadException {
    struct TypeLoadException__Class* klass;
    MonitorData* monitor;
    struct TypeLoadException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeLoadException_FWDDECL)
#define IL2CPP_STRUCT_TypeLoadException_FWDDECL
#include <Modloader/app/structs/TypeLoadException__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeLoadException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLoadException_DEFINED) && !defined(IL2CPP_STRUCT_TypeLoadException_FWDDECL)
#include <Modloader/app/structs/TypeLoadException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeLoadException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
