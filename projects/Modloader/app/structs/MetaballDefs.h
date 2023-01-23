#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaballDefs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaballDefs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballDefs_DEFINED)
#define IL2CPP_STRUCT_MetaballDefs_DEFINED
struct MetaballDefs__Class;
struct MetaballDefs {
    struct MetaballDefs__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MetaballDefs_FWDDECL)
#define IL2CPP_STRUCT_MetaballDefs_FWDDECL
#include <Modloader/app/structs/MetaballDefs__Class.h>
#endif
#undef IL2CPP_STRUCT_MetaballDefs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballDefs_DEFINED) && !defined(IL2CPP_STRUCT_MetaballDefs_FWDDECL)
#include <Modloader/app/structs/MetaballDefs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaballDefs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
