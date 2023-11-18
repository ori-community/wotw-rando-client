#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocatedActiveAxis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocatedActiveAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocatedActiveAxis_DEFINED)
#include <Modloader/app/structs/LocatedActiveAxis__Fields.h>
#if defined(IL2CPP_STRUCT_LocatedActiveAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_LocatedActiveAxis_DEFINED
struct LocatedActiveAxis__Class;
struct LocatedActiveAxis {
    struct LocatedActiveAxis__Class* klass;
    MonitorData* monitor;
    struct LocatedActiveAxis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocatedActiveAxis_FWDDECL)
#define IL2CPP_STRUCT_LocatedActiveAxis_FWDDECL
#include <Modloader/app/structs/LocatedActiveAxis__Class.h>
#endif
#undef IL2CPP_STRUCT_LocatedActiveAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocatedActiveAxis_DEFINED) && !defined(IL2CPP_STRUCT_LocatedActiveAxis_FWDDECL)
#include <Modloader/app/structs/LocatedActiveAxis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocatedActiveAxis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
