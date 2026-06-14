#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastResourceComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastResourceComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastResourceComparer_DEFINED)
#define IL2CPP_STRUCT_FastResourceComparer_DEFINED
struct FastResourceComparer__Class;
struct FastResourceComparer {
    struct FastResourceComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FastResourceComparer_FWDDECL)
#define IL2CPP_STRUCT_FastResourceComparer_FWDDECL
#include <Modloader/app/structs/FastResourceComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_FastResourceComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastResourceComparer_DEFINED) && !defined(IL2CPP_STRUCT_FastResourceComparer_FWDDECL)
#include <Modloader/app/structs/FastResourceComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastResourceComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
