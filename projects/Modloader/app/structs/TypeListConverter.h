#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeListConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeListConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeListConverter_DEFINED)
#include <Modloader/app/structs/TypeListConverter__Fields.h>
#if defined(IL2CPP_STRUCT_TypeListConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeListConverter_DEFINED
struct TypeListConverter__Class;
struct TypeListConverter {
    struct TypeListConverter__Class* klass;
    MonitorData* monitor;
    struct TypeListConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeListConverter_FWDDECL)
#define IL2CPP_STRUCT_TypeListConverter_FWDDECL
#include <Modloader/app/structs/TypeListConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeListConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeListConverter_DEFINED) && !defined(IL2CPP_STRUCT_TypeListConverter_FWDDECL)
#include <Modloader/app/structs/TypeListConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeListConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
