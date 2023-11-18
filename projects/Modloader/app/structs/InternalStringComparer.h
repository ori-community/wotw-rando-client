#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalStringComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalStringComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalStringComparer_DEFINED)
#define IL2CPP_STRUCT_InternalStringComparer_DEFINED
struct InternalStringComparer__Class;
struct InternalStringComparer {
    struct InternalStringComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalStringComparer_FWDDECL)
#define IL2CPP_STRUCT_InternalStringComparer_FWDDECL
#include <Modloader/app/structs/InternalStringComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalStringComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalStringComparer_DEFINED) && !defined(IL2CPP_STRUCT_InternalStringComparer_FWDDECL)
#include <Modloader/app/structs/InternalStringComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalStringComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
