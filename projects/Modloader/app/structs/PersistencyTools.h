#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistencyTools_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistencyTools_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistencyTools_DEFINED)
#define IL2CPP_STRUCT_PersistencyTools_DEFINED
struct PersistencyTools__Class;
struct PersistencyTools {
    struct PersistencyTools__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PersistencyTools_FWDDECL)
#define IL2CPP_STRUCT_PersistencyTools_FWDDECL
#include <Modloader/app/structs/PersistencyTools__Class.h>
#endif
#undef IL2CPP_STRUCT_PersistencyTools_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistencyTools_DEFINED) && !defined(IL2CPP_STRUCT_PersistencyTools_FWDDECL)
#include <Modloader/app/structs/PersistencyTools.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistencyTools.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
