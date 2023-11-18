#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameIdentifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameIdentifier_DEFINED)
#include <Modloader/app/structs/NameIdentifier__Fields.h>
#if defined(IL2CPP_STRUCT_NameIdentifier__Fields_DEFINED)
#define IL2CPP_STRUCT_NameIdentifier_DEFINED
struct NameIdentifier__Class;
struct NameIdentifier {
    struct NameIdentifier__Class* klass;
    MonitorData* monitor;
    struct NameIdentifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameIdentifier_FWDDECL)
#define IL2CPP_STRUCT_NameIdentifier_FWDDECL
#include <Modloader/app/structs/NameIdentifier__Class.h>
#endif
#undef IL2CPP_STRUCT_NameIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameIdentifier_DEFINED) && !defined(IL2CPP_STRUCT_NameIdentifier_FWDDECL)
#include <Modloader/app/structs/NameIdentifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameIdentifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
