#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariable_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariable_DEFINED)
#include <Modloader/app/structs/LocalVariable__Fields.h>
#if defined(IL2CPP_STRUCT_LocalVariable__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariable_DEFINED
struct LocalVariable__Class;
struct LocalVariable {
    struct LocalVariable__Class* klass;
    MonitorData* monitor;
    struct LocalVariable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalVariable_FWDDECL)
#define IL2CPP_STRUCT_LocalVariable_FWDDECL
#include <Modloader/app/structs/LocalVariable__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalVariable_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariable_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariable_FWDDECL)
#include <Modloader/app/structs/LocalVariable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
