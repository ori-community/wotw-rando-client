#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_language_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_language_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_language_DEFINED)
#include <Modloader/app/structs/Datatype_language__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_language__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_language_DEFINED
struct Datatype_language__Class;
struct Datatype_language {
    struct Datatype_language__Class* klass;
    MonitorData* monitor;
    struct Datatype_language__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_language_FWDDECL)
#define IL2CPP_STRUCT_Datatype_language_FWDDECL
#include <Modloader/app/structs/Datatype_language__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_language_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_language_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_language_FWDDECL)
#include <Modloader/app/structs/Datatype_language.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_language.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
