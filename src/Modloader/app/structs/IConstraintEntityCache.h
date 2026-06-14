#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstraintEntityCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstraintEntityCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstraintEntityCache_DEFINED)
#define IL2CPP_STRUCT_IConstraintEntityCache_DEFINED
struct IConstraintEntityCache__Class;
struct IConstraintEntityCache {
    struct IConstraintEntityCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstraintEntityCache_FWDDECL)
#define IL2CPP_STRUCT_IConstraintEntityCache_FWDDECL
#include <Modloader/app/structs/IConstraintEntityCache__Class.h>
#endif
#undef IL2CPP_STRUCT_IConstraintEntityCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstraintEntityCache_DEFINED) && !defined(IL2CPP_STRUCT_IConstraintEntityCache_FWDDECL)
#include <Modloader/app/structs/IConstraintEntityCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstraintEntityCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
