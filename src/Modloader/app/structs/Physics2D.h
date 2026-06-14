#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Physics2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Physics2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_Physics2D_DEFINED)
#define IL2CPP_STRUCT_Physics2D_DEFINED
struct Physics2D__Class;
struct Physics2D {
    struct Physics2D__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Physics2D_FWDDECL)
#define IL2CPP_STRUCT_Physics2D_FWDDECL
#include <Modloader/app/structs/Physics2D__Class.h>
#endif
#undef IL2CPP_STRUCT_Physics2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_Physics2D_DEFINED) && !defined(IL2CPP_STRUCT_Physics2D_FWDDECL)
#include <Modloader/app/structs/Physics2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Physics2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
