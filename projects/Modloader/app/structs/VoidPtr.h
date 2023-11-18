#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoidPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoidPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoidPtr_DEFINED)
#define IL2CPP_STRUCT_VoidPtr_DEFINED
struct VoidPtr__Class;
struct VoidPtr {
    struct VoidPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_VoidPtr_FWDDECL)
#define IL2CPP_STRUCT_VoidPtr_FWDDECL
#include <Modloader/app/structs/VoidPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_VoidPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoidPtr_DEFINED) && !defined(IL2CPP_STRUCT_VoidPtr_FWDDECL)
#include <Modloader/app/structs/VoidPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoidPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
