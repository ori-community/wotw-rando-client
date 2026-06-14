#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetEffector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetEffector_DEFINED)
#include <Modloader/app/structs/OffsetEffector__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetEffector__Fields_DEFINED)
#define IL2CPP_STRUCT_OffsetEffector_DEFINED
struct OffsetEffector__Class;
struct OffsetEffector {
    struct OffsetEffector__Class* klass;
    MonitorData* monitor;
    struct OffsetEffector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetEffector_FWDDECL)
#define IL2CPP_STRUCT_OffsetEffector_FWDDECL
#include <Modloader/app/structs/OffsetEffector__Class.h>
#endif
#undef IL2CPP_STRUCT_OffsetEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetEffector_DEFINED) && !defined(IL2CPP_STRUCT_OffsetEffector_FWDDECL)
#include <Modloader/app/structs/OffsetEffector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetEffector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
