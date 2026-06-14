#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SBytePtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SBytePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_SBytePtr_DEFINED)
#define IL2CPP_STRUCT_SBytePtr_DEFINED
struct SBytePtr__Class;
struct SBytePtr {
    struct SBytePtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SBytePtr_FWDDECL)
#define IL2CPP_STRUCT_SBytePtr_FWDDECL
#include <Modloader/app/structs/SBytePtr__Class.h>
#endif
#undef IL2CPP_STRUCT_SBytePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_SBytePtr_DEFINED) && !defined(IL2CPP_STRUCT_SBytePtr_FWDDECL)
#include <Modloader/app/structs/SBytePtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SBytePtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
