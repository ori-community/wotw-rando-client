#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDelegateCreator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDelegateCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDelegateCreator_DEFINED)
#include <Modloader/app/structs/LightDelegateCreator__Fields.h>
#if defined(IL2CPP_STRUCT_LightDelegateCreator__Fields_DEFINED)
#define IL2CPP_STRUCT_LightDelegateCreator_DEFINED
struct LightDelegateCreator__Class;
struct LightDelegateCreator {
    struct LightDelegateCreator__Class* klass;
    MonitorData* monitor;
    struct LightDelegateCreator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightDelegateCreator_FWDDECL)
#define IL2CPP_STRUCT_LightDelegateCreator_FWDDECL
#include <Modloader/app/structs/LightDelegateCreator__Class.h>
#endif
#undef IL2CPP_STRUCT_LightDelegateCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDelegateCreator_DEFINED) && !defined(IL2CPP_STRUCT_LightDelegateCreator_FWDDECL)
#include <Modloader/app/structs/LightDelegateCreator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDelegateCreator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
