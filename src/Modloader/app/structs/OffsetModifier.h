#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetModifier_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_OffsetModifier_DEFINED
struct OffsetModifier__Class;
struct OffsetModifier {
    struct OffsetModifier__Class* klass;
    MonitorData* monitor;
    struct OffsetModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetModifier_FWDDECL)
#define IL2CPP_STRUCT_OffsetModifier_FWDDECL
#include <Modloader/app/structs/OffsetModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_OffsetModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetModifier_DEFINED) && !defined(IL2CPP_STRUCT_OffsetModifier_FWDDECL)
#include <Modloader/app/structs/OffsetModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
