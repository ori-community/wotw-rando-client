#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericTypeParameterBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericTypeParameterBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericTypeParameterBuilder_DEFINED)
#include <Modloader/app/structs/GenericTypeParameterBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_GenericTypeParameterBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericTypeParameterBuilder_DEFINED
struct GenericTypeParameterBuilder__Class;
struct GenericTypeParameterBuilder {
    struct GenericTypeParameterBuilder__Class* klass;
    MonitorData* monitor;
    struct GenericTypeParameterBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericTypeParameterBuilder_FWDDECL)
#define IL2CPP_STRUCT_GenericTypeParameterBuilder_FWDDECL
#include <Modloader/app/structs/GenericTypeParameterBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericTypeParameterBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericTypeParameterBuilder_DEFINED) && !defined(IL2CPP_STRUCT_GenericTypeParameterBuilder_FWDDECL)
#include <Modloader/app/structs/GenericTypeParameterBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericTypeParameterBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
