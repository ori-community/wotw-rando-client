#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexRunnerFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexRunnerFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexRunnerFactory_DEFINED)
#define IL2CPP_STRUCT_RegexRunnerFactory_DEFINED
struct RegexRunnerFactory__Class;
struct RegexRunnerFactory {
    struct RegexRunnerFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexRunnerFactory_FWDDECL)
#define IL2CPP_STRUCT_RegexRunnerFactory_FWDDECL
#include <Modloader/app/structs/RegexRunnerFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexRunnerFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexRunnerFactory_DEFINED) && !defined(IL2CPP_STRUCT_RegexRunnerFactory_FWDDECL)
#include <Modloader/app/structs/RegexRunnerFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexRunnerFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
