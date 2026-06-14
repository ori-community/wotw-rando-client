#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleScripting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleScripting_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleScripting_DEFINED)
#include <Modloader/app/structs/SimpleScripting__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleScripting__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleScripting_DEFINED
struct SimpleScripting__Class;
struct SimpleScripting {
    struct SimpleScripting__Class* klass;
    MonitorData* monitor;
    struct SimpleScripting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleScripting_FWDDECL)
#define IL2CPP_STRUCT_SimpleScripting_FWDDECL
#include <Modloader/app/structs/SimpleScripting__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleScripting_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleScripting_DEFINED) && !defined(IL2CPP_STRUCT_SimpleScripting_FWDDECL)
#include <Modloader/app/structs/SimpleScripting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleScripting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
