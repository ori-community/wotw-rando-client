#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageStructureTool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageStructureTool_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureTool_DEFINED)
#include <Modloader/app/structs/CageStructureTool__Fields.h>
#if defined(IL2CPP_STRUCT_CageStructureTool__Fields_DEFINED)
#define IL2CPP_STRUCT_CageStructureTool_DEFINED
struct CageStructureTool__Class;
struct CageStructureTool {
    struct CageStructureTool__Class* klass;
    MonitorData* monitor;
    struct CageStructureTool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageStructureTool_FWDDECL)
#define IL2CPP_STRUCT_CageStructureTool_FWDDECL
#include <Modloader/app/structs/CageStructureTool__Class.h>
#endif
#undef IL2CPP_STRUCT_CageStructureTool_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureTool_DEFINED) && !defined(IL2CPP_STRUCT_CageStructureTool_FWDDECL)
#include <Modloader/app/structs/CageStructureTool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageStructureTool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
