#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UtilityDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UtilityDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilityDecorator_DEFINED)
#include <Modloader/app/structs/UtilityDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_UtilityDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_UtilityDecorator_DEFINED
struct UtilityDecorator__Class;
struct UtilityDecorator {
    struct UtilityDecorator__Class* klass;
    MonitorData* monitor;
    struct UtilityDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UtilityDecorator_FWDDECL)
#define IL2CPP_STRUCT_UtilityDecorator_FWDDECL
#include <Modloader/app/structs/UtilityDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_UtilityDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilityDecorator_DEFINED) && !defined(IL2CPP_STRUCT_UtilityDecorator_FWDDECL)
#include <Modloader/app/structs/UtilityDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UtilityDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
