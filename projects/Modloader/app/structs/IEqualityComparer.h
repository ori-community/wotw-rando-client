#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEqualityComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEqualityComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEqualityComparer_DEFINED)
#define IL2CPP_STRUCT_IEqualityComparer_DEFINED
struct IEqualityComparer__Class;
struct IEqualityComparer {
    struct IEqualityComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEqualityComparer_FWDDECL)
#define IL2CPP_STRUCT_IEqualityComparer_FWDDECL
#include <Modloader/app/structs/IEqualityComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_IEqualityComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEqualityComparer_DEFINED) && !defined(IL2CPP_STRUCT_IEqualityComparer_FWDDECL)
#include <Modloader/app/structs/IEqualityComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEqualityComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
