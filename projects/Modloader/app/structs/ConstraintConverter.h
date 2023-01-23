#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintConverter_DEFINED)
#define IL2CPP_STRUCT_ConstraintConverter_DEFINED
struct ConstraintConverter__Class;
struct ConstraintConverter {
    struct ConstraintConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintConverter_FWDDECL)
#define IL2CPP_STRUCT_ConstraintConverter_FWDDECL
#include <Modloader/app/structs/ConstraintConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintConverter_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintConverter_FWDDECL)
#include <Modloader/app/structs/ConstraintConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
