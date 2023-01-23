#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComparer_DEFINED)
#define IL2CPP_STRUCT_IComparer_DEFINED
struct IComparer__Class;
struct IComparer {
    struct IComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComparer_FWDDECL)
#define IL2CPP_STRUCT_IComparer_FWDDECL
#include <Modloader/app/structs/IComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_IComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComparer_DEFINED) && !defined(IL2CPP_STRUCT_IComparer_FWDDECL)
#include <Modloader/app/structs/IComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
