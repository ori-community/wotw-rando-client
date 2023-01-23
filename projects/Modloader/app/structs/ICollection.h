#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICollection_DEFINED)
#define IL2CPP_STRUCT_ICollection_DEFINED
struct ICollection__Class;
struct ICollection {
    struct ICollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICollection_FWDDECL)
#define IL2CPP_STRUCT_ICollection_FWDDECL
#include <Modloader/app/structs/ICollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ICollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICollection_DEFINED) && !defined(IL2CPP_STRUCT_ICollection_FWDDECL)
#include <Modloader/app/structs/ICollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
