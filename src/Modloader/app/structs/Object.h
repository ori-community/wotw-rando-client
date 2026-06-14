#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Object_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Object_INITIALIZING
#if !defined(IL2CPP_STRUCT_Object_DEFINED)
#define IL2CPP_STRUCT_Object_DEFINED
struct Object__Class;
struct Object {
    struct Object__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Object_FWDDECL)
#define IL2CPP_STRUCT_Object_FWDDECL
#include <Modloader/app/structs/Object__Class.h>
#endif
#undef IL2CPP_STRUCT_Object_INITIALIZING
#if !defined(IL2CPP_STRUCT_Object_DEFINED) && !defined(IL2CPP_STRUCT_Object_FWDDECL)
#include <Modloader/app/structs/Object.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Object.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
