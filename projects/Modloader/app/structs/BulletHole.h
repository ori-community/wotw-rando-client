#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BulletHole_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BulletHole_INITIALIZING
#if !defined(IL2CPP_STRUCT_BulletHole_DEFINED)
#include <Modloader/app/structs/BulletHole__Fields.h>
#if defined(IL2CPP_STRUCT_BulletHole__Fields_DEFINED)
#define IL2CPP_STRUCT_BulletHole_DEFINED
struct BulletHole__Class;
struct BulletHole {
    struct BulletHole__Class* klass;
    MonitorData* monitor;
    struct BulletHole__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BulletHole_FWDDECL)
#define IL2CPP_STRUCT_BulletHole_FWDDECL
#include <Modloader/app/structs/BulletHole__Class.h>
#endif
#undef IL2CPP_STRUCT_BulletHole_INITIALIZING
#if !defined(IL2CPP_STRUCT_BulletHole_DEFINED) && !defined(IL2CPP_STRUCT_BulletHole_FWDDECL)
#include <Modloader/app/structs/BulletHole.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BulletHole.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
