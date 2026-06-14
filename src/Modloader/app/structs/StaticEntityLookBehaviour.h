#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticEntityLookBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticEntityLookBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityLookBehaviour_DEFINED)
#include <Modloader/app/structs/StaticEntityLookBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_StaticEntityLookBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticEntityLookBehaviour_DEFINED
struct StaticEntityLookBehaviour__Class;
struct StaticEntityLookBehaviour {
    struct StaticEntityLookBehaviour__Class* klass;
    MonitorData* monitor;
    struct StaticEntityLookBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticEntityLookBehaviour_FWDDECL)
#define IL2CPP_STRUCT_StaticEntityLookBehaviour_FWDDECL
#include <Modloader/app/structs/StaticEntityLookBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_StaticEntityLookBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityLookBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_StaticEntityLookBehaviour_FWDDECL)
#include <Modloader/app/structs/StaticEntityLookBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticEntityLookBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
