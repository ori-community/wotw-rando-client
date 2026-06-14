#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITestNotifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITestNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITestNotifier_DEFINED)
#define IL2CPP_STRUCT_ITestNotifier_DEFINED
struct ITestNotifier__Class;
struct ITestNotifier {
    struct ITestNotifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITestNotifier_FWDDECL)
#define IL2CPP_STRUCT_ITestNotifier_FWDDECL
#include <Modloader/app/structs/ITestNotifier__Class.h>
#endif
#undef IL2CPP_STRUCT_ITestNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITestNotifier_DEFINED) && !defined(IL2CPP_STRUCT_ITestNotifier_FWDDECL)
#include <Modloader/app/structs/ITestNotifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITestNotifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
