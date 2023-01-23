#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialVFXSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialVFXSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXSet_DEFINED)
#include <Modloader/app/structs/MaterialVFXSet__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialVFXSet__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialVFXSet_DEFINED
struct MaterialVFXSet__Class;
struct MaterialVFXSet {
    struct MaterialVFXSet__Class* klass;
    MonitorData* monitor;
    struct MaterialVFXSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialVFXSet_FWDDECL)
#define IL2CPP_STRUCT_MaterialVFXSet_FWDDECL
#include <Modloader/app/structs/MaterialVFXSet__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialVFXSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXSet_DEFINED) && !defined(IL2CPP_STRUCT_MaterialVFXSet_FWDDECL)
#include <Modloader/app/structs/MaterialVFXSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialVFXSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
