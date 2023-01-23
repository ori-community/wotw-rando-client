#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntPtrPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntPtrPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtrPtr_DEFINED)
#define IL2CPP_STRUCT_IntPtrPtr_DEFINED
struct IntPtrPtr__Class;
struct IntPtrPtr {
    struct IntPtrPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IntPtrPtr_FWDDECL)
#define IL2CPP_STRUCT_IntPtrPtr_FWDDECL
#include <Modloader/app/structs/IntPtrPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_IntPtrPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtrPtr_DEFINED) && !defined(IL2CPP_STRUCT_IntPtrPtr_FWDDECL)
#include <Modloader/app/structs/IntPtrPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntPtrPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
