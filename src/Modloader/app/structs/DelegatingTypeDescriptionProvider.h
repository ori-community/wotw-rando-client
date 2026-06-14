#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_DEFINED)
#include <Modloader/app/structs/DelegatingTypeDescriptionProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DelegatingTypeDescriptionProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_DEFINED
struct DelegatingTypeDescriptionProvider__Class;
struct DelegatingTypeDescriptionProvider {
    struct DelegatingTypeDescriptionProvider__Class* klass;
    MonitorData* monitor;
    struct DelegatingTypeDescriptionProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_FWDDECL)
#define IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_FWDDECL
#include <Modloader/app/structs/DelegatingTypeDescriptionProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_DEFINED) && !defined(IL2CPP_STRUCT_DelegatingTypeDescriptionProvider_FWDDECL)
#include <Modloader/app/structs/DelegatingTypeDescriptionProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelegatingTypeDescriptionProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
