#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeekingProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeekingProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeekingProjectile_DEFINED)
#include <Modloader/app/structs/SeekingProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_SeekingProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_SeekingProjectile_DEFINED
struct SeekingProjectile__Class;
struct SeekingProjectile {
    struct SeekingProjectile__Class* klass;
    MonitorData* monitor;
    struct SeekingProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeekingProjectile_FWDDECL)
#define IL2CPP_STRUCT_SeekingProjectile_FWDDECL
#include <Modloader/app/structs/SeekingProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_SeekingProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeekingProjectile_DEFINED) && !defined(IL2CPP_STRUCT_SeekingProjectile_FWDDECL)
#include <Modloader/app/structs/SeekingProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeekingProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
