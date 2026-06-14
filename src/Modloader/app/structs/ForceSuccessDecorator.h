#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForceSuccessDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForceSuccessDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceSuccessDecorator_DEFINED)
#include <Modloader/app/structs/ForceSuccessDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_ForceSuccessDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_ForceSuccessDecorator_DEFINED
struct ForceSuccessDecorator__Class;
struct ForceSuccessDecorator {
    struct ForceSuccessDecorator__Class* klass;
    MonitorData* monitor;
    struct ForceSuccessDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForceSuccessDecorator_FWDDECL)
#define IL2CPP_STRUCT_ForceSuccessDecorator_FWDDECL
#include <Modloader/app/structs/ForceSuccessDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_ForceSuccessDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceSuccessDecorator_DEFINED) && !defined(IL2CPP_STRUCT_ForceSuccessDecorator_FWDDECL)
#include <Modloader/app/structs/ForceSuccessDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForceSuccessDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
