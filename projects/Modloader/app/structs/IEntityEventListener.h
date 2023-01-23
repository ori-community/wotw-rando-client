#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntityEventListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntityEventListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityEventListener_DEFINED)
#define IL2CPP_STRUCT_IEntityEventListener_DEFINED
struct IEntityEventListener__Class;
struct IEntityEventListener {
    struct IEntityEventListener__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntityEventListener_FWDDECL)
#define IL2CPP_STRUCT_IEntityEventListener_FWDDECL
#include <Modloader/app/structs/IEntityEventListener__Class.h>
#endif
#undef IL2CPP_STRUCT_IEntityEventListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityEventListener_DEFINED) && !defined(IL2CPP_STRUCT_IEntityEventListener_FWDDECL)
#include <Modloader/app/structs/IEntityEventListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntityEventListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
