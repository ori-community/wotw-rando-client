#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameSerializer_DEFINED)
#include <Modloader/app/structs/NameSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_NameSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_NameSerializer_DEFINED
struct NameSerializer__Class;
struct NameSerializer {
    struct NameSerializer__Class* klass;
    MonitorData* monitor;
    struct NameSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameSerializer_FWDDECL)
#define IL2CPP_STRUCT_NameSerializer_FWDDECL
#include <Modloader/app/structs/NameSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_NameSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameSerializer_DEFINED) && !defined(IL2CPP_STRUCT_NameSerializer_FWDDECL)
#include <Modloader/app/structs/NameSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
