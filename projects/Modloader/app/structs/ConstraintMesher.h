#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintMesher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintMesher_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintMesher_DEFINED)
#include <Modloader/app/structs/ConstraintMesher__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintMesher__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintMesher_DEFINED
struct ConstraintMesher__Class;
struct ConstraintMesher {
    struct ConstraintMesher__Class* klass;
    MonitorData* monitor;
    struct ConstraintMesher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintMesher_FWDDECL)
#define IL2CPP_STRUCT_ConstraintMesher_FWDDECL
#include <Modloader/app/structs/ConstraintMesher__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintMesher_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintMesher_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintMesher_FWDDECL)
#include <Modloader/app/structs/ConstraintMesher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintMesher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
