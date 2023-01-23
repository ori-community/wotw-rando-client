#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneWayAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneWayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayAttribute_DEFINED)
#define IL2CPP_STRUCT_OneWayAttribute_DEFINED
struct OneWayAttribute__Class;
struct OneWayAttribute {
    struct OneWayAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OneWayAttribute_FWDDECL)
#define IL2CPP_STRUCT_OneWayAttribute_FWDDECL
#include <Modloader/app/structs/OneWayAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OneWayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OneWayAttribute_FWDDECL)
#include <Modloader/app/structs/OneWayAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneWayAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
