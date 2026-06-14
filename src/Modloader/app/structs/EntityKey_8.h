#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityKey_8_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityKey_8_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_8_DEFINED)
#include <Modloader/app/structs/EntityKey_8__Fields.h>
#if defined(IL2CPP_STRUCT_EntityKey_8__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityKey_8_DEFINED
struct EntityKey_8__Class;
struct EntityKey_8 {
    struct EntityKey_8__Class* klass;
    MonitorData* monitor;
    struct EntityKey_8__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityKey_8_FWDDECL)
#define IL2CPP_STRUCT_EntityKey_8_FWDDECL
#include <Modloader/app/structs/EntityKey_8__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityKey_8_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_8_DEFINED) && !defined(IL2CPP_STRUCT_EntityKey_8_FWDDECL)
#include <Modloader/app/structs/EntityKey_8.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityKey_8.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
