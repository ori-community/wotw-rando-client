#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_Surname_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_Surname_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Surname_DEFINED)
#include <Modloader/app/structs/X520_Surname__Fields.h>
#if defined(IL2CPP_STRUCT_X520_Surname__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_Surname_DEFINED
struct X520_Surname__Class;
struct X520_Surname {
    struct X520_Surname__Class* klass;
    MonitorData* monitor;
    struct X520_Surname__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_Surname_FWDDECL)
#define IL2CPP_STRUCT_X520_Surname_FWDDECL
#include <Modloader/app/structs/X520_Surname__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_Surname_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Surname_DEFINED) && !defined(IL2CPP_STRUCT_X520_Surname_FWDDECL)
#include <Modloader/app/structs/X520_Surname.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_Surname.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
