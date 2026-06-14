#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterModifier__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterModifier__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterModifier__Boxed_DEFINED)
#include <Modloader/app/structs/ParameterModifier.h>
#if defined(IL2CPP_STRUCT_ParameterModifier_DEFINED)
#define IL2CPP_STRUCT_ParameterModifier__Boxed_DEFINED
struct ParameterModifier__Class;
struct ParameterModifier__Boxed {
    struct ParameterModifier__Class* klass;
    MonitorData* monitor;
    struct ParameterModifier fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParameterModifier__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ParameterModifier__Boxed_FWDDECL
#include <Modloader/app/structs/ParameterModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_ParameterModifier__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterModifier__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ParameterModifier__Boxed_FWDDECL)
#include <Modloader/app/structs/ParameterModifier__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterModifier__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
