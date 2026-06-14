#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWrappedCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWrappedCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWrappedCollection_DEFINED)
#define IL2CPP_STRUCT_IWrappedCollection_DEFINED
struct IWrappedCollection__Class;
struct IWrappedCollection {
    struct IWrappedCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWrappedCollection_FWDDECL)
#define IL2CPP_STRUCT_IWrappedCollection_FWDDECL
#include <Modloader/app/structs/IWrappedCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_IWrappedCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWrappedCollection_DEFINED) && !defined(IL2CPP_STRUCT_IWrappedCollection_FWDDECL)
#include <Modloader/app/structs/IWrappedCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWrappedCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
