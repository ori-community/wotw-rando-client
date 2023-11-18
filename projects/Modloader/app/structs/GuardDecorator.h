#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuardDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuardDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuardDecorator_DEFINED)
#include <Modloader/app/structs/GuardDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_GuardDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_GuardDecorator_DEFINED
struct GuardDecorator__Class;
struct GuardDecorator {
    struct GuardDecorator__Class* klass;
    MonitorData* monitor;
    struct GuardDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuardDecorator_FWDDECL)
#define IL2CPP_STRUCT_GuardDecorator_FWDDECL
#include <Modloader/app/structs/GuardDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_GuardDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuardDecorator_DEFINED) && !defined(IL2CPP_STRUCT_GuardDecorator_FWDDECL)
#include <Modloader/app/structs/GuardDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuardDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
