#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionStateModifier_DEFINED)
#include <Modloader/app/structs/PositionStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_PositionStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionStateModifier_DEFINED
struct PositionStateModifier__Class;
struct PositionStateModifier {
    struct PositionStateModifier__Class* klass;
    MonitorData* monitor;
    struct PositionStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionStateModifier_FWDDECL)
#define IL2CPP_STRUCT_PositionStateModifier_FWDDECL
#include <Modloader/app/structs/PositionStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_PositionStateModifier_FWDDECL)
#include <Modloader/app/structs/PositionStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
