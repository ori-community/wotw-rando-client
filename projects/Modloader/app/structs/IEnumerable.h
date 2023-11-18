#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEnumerable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEnumerable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnumerable_DEFINED)
#define IL2CPP_STRUCT_IEnumerable_DEFINED
struct IEnumerable__Class;
struct IEnumerable {
    struct IEnumerable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEnumerable_FWDDECL)
#define IL2CPP_STRUCT_IEnumerable_FWDDECL
#include <Modloader/app/structs/IEnumerable__Class.h>
#endif
#undef IL2CPP_STRUCT_IEnumerable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnumerable_DEFINED) && !defined(IL2CPP_STRUCT_IEnumerable_FWDDECL)
#include <Modloader/app/structs/IEnumerable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEnumerable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
