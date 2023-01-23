#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_String_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_String_INITIALIZING
#if !defined(IL2CPP_STRUCT_String_DEFINED)
#include <Modloader/app/structs/String__Fields.h>
#if defined(IL2CPP_STRUCT_String__Fields_DEFINED)
#define IL2CPP_STRUCT_String_DEFINED
struct String__Class;
struct String {
    struct String__Class* klass;
    MonitorData* monitor;
    struct String__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_String_FWDDECL)
#define IL2CPP_STRUCT_String_FWDDECL
#include <Modloader/app/structs/String__Class.h>
#endif
#undef IL2CPP_STRUCT_String_INITIALIZING
#if !defined(IL2CPP_STRUCT_String_DEFINED) && !defined(IL2CPP_STRUCT_String_FWDDECL)
#include <Modloader/app/structs/String.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/String.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
