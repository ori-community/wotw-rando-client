#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStructuralEquatable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStructuralEquatable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStructuralEquatable_DEFINED)
#define IL2CPP_STRUCT_IStructuralEquatable_DEFINED
struct IStructuralEquatable__Class;
struct IStructuralEquatable {
    struct IStructuralEquatable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IStructuralEquatable_FWDDECL)
#define IL2CPP_STRUCT_IStructuralEquatable_FWDDECL
#include <Modloader/app/structs/IStructuralEquatable__Class.h>
#endif
#undef IL2CPP_STRUCT_IStructuralEquatable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStructuralEquatable_DEFINED) && !defined(IL2CPP_STRUCT_IStructuralEquatable_FWDDECL)
#include <Modloader/app/structs/IStructuralEquatable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStructuralEquatable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
