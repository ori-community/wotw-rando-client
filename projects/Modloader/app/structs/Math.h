#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Math_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Math_INITIALIZING
#if !defined(IL2CPP_STRUCT_Math_DEFINED)
#define IL2CPP_STRUCT_Math_DEFINED
struct Math__Class;
struct Math {
    struct Math__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Math_FWDDECL)
#define IL2CPP_STRUCT_Math_FWDDECL
#include <Modloader/app/structs/Math__Class.h>
#endif
#undef IL2CPP_STRUCT_Math_INITIALIZING
#if !defined(IL2CPP_STRUCT_Math_DEFINED) && !defined(IL2CPP_STRUCT_Math_FWDDECL)
#include <Modloader/app/structs/Math.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Math.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
