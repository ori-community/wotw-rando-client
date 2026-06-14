#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FindObjectsWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FindObjectsWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_FindObjectsWrapper_DEFINED)
#define IL2CPP_STRUCT_FindObjectsWrapper_DEFINED
struct FindObjectsWrapper__Class;
struct FindObjectsWrapper {
    struct FindObjectsWrapper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FindObjectsWrapper_FWDDECL)
#define IL2CPP_STRUCT_FindObjectsWrapper_FWDDECL
#include <Modloader/app/structs/FindObjectsWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_FindObjectsWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_FindObjectsWrapper_DEFINED) && !defined(IL2CPP_STRUCT_FindObjectsWrapper_FWDDECL)
#include <Modloader/app/structs/FindObjectsWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FindObjectsWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
