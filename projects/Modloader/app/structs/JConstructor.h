#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JConstructor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JConstructor_INITIALIZING
#if !defined(IL2CPP_STRUCT_JConstructor_DEFINED)
#include <Modloader/app/structs/JConstructor__Fields.h>
#if defined(IL2CPP_STRUCT_JConstructor__Fields_DEFINED)
#define IL2CPP_STRUCT_JConstructor_DEFINED
struct JConstructor__Class;
struct JConstructor {
    struct JConstructor__Class* klass;
    MonitorData* monitor;
    struct JConstructor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JConstructor_FWDDECL)
#define IL2CPP_STRUCT_JConstructor_FWDDECL
#include <Modloader/app/structs/JConstructor__Class.h>
#endif
#undef IL2CPP_STRUCT_JConstructor_INITIALIZING
#if !defined(IL2CPP_STRUCT_JConstructor_DEFINED) && !defined(IL2CPP_STRUCT_JConstructor_FWDDECL)
#include <Modloader/app/structs/JConstructor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JConstructor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
