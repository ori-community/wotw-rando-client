#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_DEFINED
struct RuntimeStructs_GPtrArrayPtr__Class;
struct RuntimeStructs_GPtrArrayPtr {
    struct RuntimeStructs_GPtrArrayPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_GPtrArrayPtr_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
