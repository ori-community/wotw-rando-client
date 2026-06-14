#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITriangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITriangle_DEFINED)
#define IL2CPP_STRUCT_ITriangle_DEFINED
struct ITriangle__Class;
struct ITriangle {
    struct ITriangle__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITriangle_FWDDECL)
#define IL2CPP_STRUCT_ITriangle_FWDDECL
#include <Modloader/app/structs/ITriangle__Class.h>
#endif
#undef IL2CPP_STRUCT_ITriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITriangle_DEFINED) && !defined(IL2CPP_STRUCT_ITriangle_FWDDECL)
#include <Modloader/app/structs/ITriangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITriangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
