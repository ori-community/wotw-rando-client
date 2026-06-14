#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectTypeDescriptionProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_DEFINED)
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider_DEFINED
struct ReflectTypeDescriptionProvider__Class;
struct ReflectTypeDescriptionProvider {
    struct ReflectTypeDescriptionProvider__Class* klass;
    MonitorData* monitor;
    struct ReflectTypeDescriptionProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_FWDDECL)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider_FWDDECL
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectTypeDescriptionProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_DEFINED) && !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_FWDDECL)
#include <Modloader/app/structs/ReflectTypeDescriptionProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectTypeDescriptionProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
