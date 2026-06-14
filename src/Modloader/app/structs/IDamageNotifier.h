#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDamageNotifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDamageNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageNotifier_DEFINED)
#define IL2CPP_STRUCT_IDamageNotifier_DEFINED
struct IDamageNotifier__Class;
struct IDamageNotifier {
    struct IDamageNotifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDamageNotifier_FWDDECL)
#define IL2CPP_STRUCT_IDamageNotifier_FWDDECL
#include <Modloader/app/structs/IDamageNotifier__Class.h>
#endif
#undef IL2CPP_STRUCT_IDamageNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageNotifier_DEFINED) && !defined(IL2CPP_STRUCT_IDamageNotifier_FWDDECL)
#include <Modloader/app/structs/IDamageNotifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDamageNotifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
