#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_Name_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_Name_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Name_DEFINED)
#include <Modloader/app/structs/X520_Name__Fields.h>
#if defined(IL2CPP_STRUCT_X520_Name__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_Name_DEFINED
struct X520_Name__Class;
struct X520_Name {
    struct X520_Name__Class* klass;
    MonitorData* monitor;
    struct X520_Name__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_Name_FWDDECL)
#define IL2CPP_STRUCT_X520_Name_FWDDECL
#include <Modloader/app/structs/X520_Name__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_Name_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Name_DEFINED) && !defined(IL2CPP_STRUCT_X520_Name_FWDDECL)
#include <Modloader/app/structs/X520_Name.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_Name.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
