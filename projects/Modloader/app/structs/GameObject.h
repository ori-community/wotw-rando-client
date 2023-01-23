#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObject_DEFINED)
#include <Modloader/app/structs/GameObject__Fields.h>
#if defined(IL2CPP_STRUCT_GameObject__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObject_DEFINED
struct GameObject__Class;
struct GameObject {
    struct GameObject__Class* klass;
    MonitorData* monitor;
    struct GameObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObject_FWDDECL)
#define IL2CPP_STRUCT_GameObject_FWDDECL
#include <Modloader/app/structs/GameObject__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObject_DEFINED) && !defined(IL2CPP_STRUCT_GameObject_FWDDECL)
#include <Modloader/app/structs/GameObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
