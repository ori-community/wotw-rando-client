#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetMapModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetMapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetMapModifier_DEFINED)
#include <Modloader/app/structs/OffsetMapModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetMapModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_OffsetMapModifier_DEFINED
struct OffsetMapModifier__Class;
struct OffsetMapModifier {
    struct OffsetMapModifier__Class* klass;
    MonitorData* monitor;
    struct OffsetMapModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetMapModifier_FWDDECL)
#define IL2CPP_STRUCT_OffsetMapModifier_FWDDECL
#include <Modloader/app/structs/OffsetMapModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_OffsetMapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetMapModifier_DEFINED) && !defined(IL2CPP_STRUCT_OffsetMapModifier_FWDDECL)
#include <Modloader/app/structs/OffsetMapModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetMapModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
