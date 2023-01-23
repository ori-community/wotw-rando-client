#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubjectAltNameExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubjectAltNameExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubjectAltNameExtension_DEFINED)
#include <Modloader/app/structs/SubjectAltNameExtension__Fields.h>
#if defined(IL2CPP_STRUCT_SubjectAltNameExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_SubjectAltNameExtension_DEFINED
struct SubjectAltNameExtension__Class;
struct SubjectAltNameExtension {
    struct SubjectAltNameExtension__Class* klass;
    MonitorData* monitor;
    struct SubjectAltNameExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubjectAltNameExtension_FWDDECL)
#define IL2CPP_STRUCT_SubjectAltNameExtension_FWDDECL
#include <Modloader/app/structs/SubjectAltNameExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_SubjectAltNameExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubjectAltNameExtension_DEFINED) && !defined(IL2CPP_STRUCT_SubjectAltNameExtension_FWDDECL)
#include <Modloader/app/structs/SubjectAltNameExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubjectAltNameExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
