#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_JValue_DEFINED)
#include <Modloader/app/structs/JValue__Fields.h>
#if defined(IL2CPP_STRUCT_JValue__Fields_DEFINED)
#define IL2CPP_STRUCT_JValue_DEFINED
struct JValue__Class;
struct JValue {
    struct JValue__Class* klass;
    MonitorData* monitor;
    struct JValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JValue_FWDDECL)
#define IL2CPP_STRUCT_JValue_FWDDECL
#include <Modloader/app/structs/JValue__Class.h>
#endif
#undef IL2CPP_STRUCT_JValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_JValue_DEFINED) && !defined(IL2CPP_STRUCT_JValue_FWDDECL)
#include <Modloader/app/structs/JValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
