#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Transform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Transform_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transform_DEFINED)
#include <Modloader/app/structs/Transform__Fields.h>
#if defined(IL2CPP_STRUCT_Transform__Fields_DEFINED)
#define IL2CPP_STRUCT_Transform_DEFINED
struct Transform__Class;
struct Transform {
    struct Transform__Class* klass;
    MonitorData* monitor;
    struct Transform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Transform_FWDDECL)
#define IL2CPP_STRUCT_Transform_FWDDECL
#include <Modloader/app/structs/Transform__Class.h>
#endif
#undef IL2CPP_STRUCT_Transform_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transform_DEFINED) && !defined(IL2CPP_STRUCT_Transform_FWDDECL)
#include <Modloader/app/structs/Transform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Transform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
