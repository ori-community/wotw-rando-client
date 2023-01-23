#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStructuralComparable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStructuralComparable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStructuralComparable_DEFINED)
#define IL2CPP_STRUCT_IStructuralComparable_DEFINED
struct IStructuralComparable__Class;
struct IStructuralComparable {
    struct IStructuralComparable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IStructuralComparable_FWDDECL)
#define IL2CPP_STRUCT_IStructuralComparable_FWDDECL
#include <Modloader/app/structs/IStructuralComparable__Class.h>
#endif
#undef IL2CPP_STRUCT_IStructuralComparable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStructuralComparable_DEFINED) && !defined(IL2CPP_STRUCT_IStructuralComparable_FWDDECL)
#include <Modloader/app/structs/IStructuralComparable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStructuralComparable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
