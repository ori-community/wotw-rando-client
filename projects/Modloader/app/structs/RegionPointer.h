#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegionPointer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegionPointer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionPointer_DEFINED)
#include <Modloader/app/structs/RegionPointer__Fields.h>
#if defined(IL2CPP_STRUCT_RegionPointer__Fields_DEFINED)
#define IL2CPP_STRUCT_RegionPointer_DEFINED
struct RegionPointer__Class;
struct RegionPointer {
    struct RegionPointer__Class* klass;
    MonitorData* monitor;
    struct RegionPointer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegionPointer_FWDDECL)
#define IL2CPP_STRUCT_RegionPointer_FWDDECL
#include <Modloader/app/structs/RegionPointer__Class.h>
#endif
#undef IL2CPP_STRUCT_RegionPointer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionPointer_DEFINED) && !defined(IL2CPP_STRUCT_RegionPointer_FWDDECL)
#include <Modloader/app/structs/RegionPointer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegionPointer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
