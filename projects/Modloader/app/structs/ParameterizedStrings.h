#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterizedStrings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterizedStrings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_DEFINED)
#define IL2CPP_STRUCT_ParameterizedStrings_DEFINED
struct ParameterizedStrings__Class;
struct ParameterizedStrings {
    struct ParameterizedStrings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_FWDDECL)
#define IL2CPP_STRUCT_ParameterizedStrings_FWDDECL
#include <Modloader/app/structs/ParameterizedStrings__Class.h>
#endif
#undef IL2CPP_STRUCT_ParameterizedStrings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedStrings_DEFINED) && !defined(IL2CPP_STRUCT_ParameterizedStrings_FWDDECL)
#include <Modloader/app/structs/ParameterizedStrings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterizedStrings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
