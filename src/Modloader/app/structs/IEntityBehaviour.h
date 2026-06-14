#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntityBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntityBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityBehaviour_DEFINED)
#define IL2CPP_STRUCT_IEntityBehaviour_DEFINED
struct IEntityBehaviour__Class;
struct IEntityBehaviour {
    struct IEntityBehaviour__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntityBehaviour_FWDDECL)
#define IL2CPP_STRUCT_IEntityBehaviour_FWDDECL
#include <Modloader/app/structs/IEntityBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_IEntityBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_IEntityBehaviour_FWDDECL)
#include <Modloader/app/structs/IEntityBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntityBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
