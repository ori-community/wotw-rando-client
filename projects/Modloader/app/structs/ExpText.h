#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpText_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpText_DEFINED)
#include <Modloader/app/structs/ExpText__Fields.h>
#if defined(IL2CPP_STRUCT_ExpText__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpText_DEFINED
struct ExpText__Class;
struct ExpText {
    struct ExpText__Class* klass;
    MonitorData* monitor;
    struct ExpText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpText_FWDDECL)
#define IL2CPP_STRUCT_ExpText_FWDDECL
#include <Modloader/app/structs/ExpText__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpText_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpText_DEFINED) && !defined(IL2CPP_STRUCT_ExpText_FWDDECL)
#include <Modloader/app/structs/ExpText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
