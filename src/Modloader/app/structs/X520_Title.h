#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_Title_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_Title_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Title_DEFINED)
#include <Modloader/app/structs/X520_Title__Fields.h>
#if defined(IL2CPP_STRUCT_X520_Title__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_Title_DEFINED
struct X520_Title__Class;
struct X520_Title {
    struct X520_Title__Class* klass;
    MonitorData* monitor;
    struct X520_Title__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_Title_FWDDECL)
#define IL2CPP_STRUCT_X520_Title_FWDDECL
#include <Modloader/app/structs/X520_Title__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_Title_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Title_DEFINED) && !defined(IL2CPP_STRUCT_X520_Title_FWDDECL)
#include <Modloader/app/structs/X520_Title.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_Title.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
