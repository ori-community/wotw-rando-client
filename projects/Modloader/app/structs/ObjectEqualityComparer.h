#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectEqualityComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectEqualityComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectEqualityComparer_DEFINED)
#define IL2CPP_STRUCT_ObjectEqualityComparer_DEFINED
struct ObjectEqualityComparer__Class;
struct ObjectEqualityComparer {
    struct ObjectEqualityComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectEqualityComparer_FWDDECL)
#define IL2CPP_STRUCT_ObjectEqualityComparer_FWDDECL
#include <Modloader/app/structs/ObjectEqualityComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectEqualityComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectEqualityComparer_DEFINED) && !defined(IL2CPP_STRUCT_ObjectEqualityComparer_FWDDECL)
#include <Modloader/app/structs/ObjectEqualityComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectEqualityComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
