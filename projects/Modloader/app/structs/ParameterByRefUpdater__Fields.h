#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterByRefUpdater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterByRefUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterByRefUpdater__Fields_DEFINED)
#include <Modloader/app/structs/ByRefUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_ByRefUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_ParameterByRefUpdater__Fields_DEFINED
struct LocalVariable;
struct ParameterByRefUpdater__Fields {
    struct ByRefUpdater__Fields _;
    struct LocalVariable* _parameter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParameterByRefUpdater__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParameterByRefUpdater__Fields_FWDDECL
#include <Modloader/app/structs/LocalVariable.h>
#endif
#undef IL2CPP_STRUCT_ParameterByRefUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterByRefUpdater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParameterByRefUpdater__Fields_FWDDECL)
#include <Modloader/app/structs/ParameterByRefUpdater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterByRefUpdater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
