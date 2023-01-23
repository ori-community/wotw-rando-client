#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEnterExitCollision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEnterExitCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnterExitCollision_DEFINED)
#include <Modloader/app/structs/SeinEnterExitCollision__Fields.h>
#if defined(IL2CPP_STRUCT_SeinEnterExitCollision__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEnterExitCollision_DEFINED
struct SeinEnterExitCollision__Class;
struct SeinEnterExitCollision {
    struct SeinEnterExitCollision__Class* klass;
    MonitorData* monitor;
    struct SeinEnterExitCollision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEnterExitCollision_FWDDECL)
#define IL2CPP_STRUCT_SeinEnterExitCollision_FWDDECL
#include <Modloader/app/structs/SeinEnterExitCollision__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinEnterExitCollision_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnterExitCollision_DEFINED) && !defined(IL2CPP_STRUCT_SeinEnterExitCollision_FWDDECL)
#include <Modloader/app/structs/SeinEnterExitCollision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEnterExitCollision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
