#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_DEFINED)
#include <Modloader/app/structs/ArrayList__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayList__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayList_DEFINED
struct ArrayList__Class;
struct ArrayList {
    struct ArrayList__Class* klass;
    MonitorData* monitor;
    struct ArrayList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayList_FWDDECL)
#define IL2CPP_STRUCT_ArrayList_FWDDECL
#include <Modloader/app/structs/ArrayList__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_DEFINED) && !defined(IL2CPP_STRUCT_ArrayList_FWDDECL)
#include <Modloader/app/structs/ArrayList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
