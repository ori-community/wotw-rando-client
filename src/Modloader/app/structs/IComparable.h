#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComparable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComparable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComparable_DEFINED)
#define IL2CPP_STRUCT_IComparable_DEFINED
struct IComparable__Class;
struct IComparable {
    struct IComparable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComparable_FWDDECL)
#define IL2CPP_STRUCT_IComparable_FWDDECL
#include <Modloader/app/structs/IComparable__Class.h>
#endif
#undef IL2CPP_STRUCT_IComparable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComparable_DEFINED) && !defined(IL2CPP_STRUCT_IComparable_FWDDECL)
#include <Modloader/app/structs/IComparable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComparable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
