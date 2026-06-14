#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityMesher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityMesher_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMesher_DEFINED)
#include <Modloader/app/structs/QualityMesher__Fields.h>
#if defined(IL2CPP_STRUCT_QualityMesher__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityMesher_DEFINED
struct QualityMesher__Class;
struct QualityMesher {
    struct QualityMesher__Class* klass;
    MonitorData* monitor;
    struct QualityMesher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualityMesher_FWDDECL)
#define IL2CPP_STRUCT_QualityMesher_FWDDECL
#include <Modloader/app/structs/QualityMesher__Class.h>
#endif
#undef IL2CPP_STRUCT_QualityMesher_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMesher_DEFINED) && !defined(IL2CPP_STRUCT_QualityMesher_FWDDECL)
#include <Modloader/app/structs/QualityMesher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityMesher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
