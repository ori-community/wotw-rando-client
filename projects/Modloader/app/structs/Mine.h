#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mine_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mine_DEFINED)
#include <Modloader/app/structs/Mine__Fields.h>
#if defined(IL2CPP_STRUCT_Mine__Fields_DEFINED)
#define IL2CPP_STRUCT_Mine_DEFINED
struct Mine__Class;
struct Mine {
    struct Mine__Class* klass;
    MonitorData* monitor;
    struct Mine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mine_FWDDECL)
#define IL2CPP_STRUCT_Mine_FWDDECL
#include <Modloader/app/structs/Mine__Class.h>
#endif
#undef IL2CPP_STRUCT_Mine_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mine_DEFINED) && !defined(IL2CPP_STRUCT_Mine_FWDDECL)
#include <Modloader/app/structs/Mine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
