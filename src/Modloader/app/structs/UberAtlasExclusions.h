#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberAtlasExclusions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberAtlasExclusions_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAtlasExclusions_DEFINED)
#include <Modloader/app/structs/UberAtlasExclusions__Fields.h>
#if defined(IL2CPP_STRUCT_UberAtlasExclusions__Fields_DEFINED)
#define IL2CPP_STRUCT_UberAtlasExclusions_DEFINED
struct UberAtlasExclusions__Class;
struct UberAtlasExclusions {
    struct UberAtlasExclusions__Class* klass;
    MonitorData* monitor;
    struct UberAtlasExclusions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberAtlasExclusions_FWDDECL)
#define IL2CPP_STRUCT_UberAtlasExclusions_FWDDECL
#include <Modloader/app/structs/UberAtlasExclusions__Class.h>
#endif
#undef IL2CPP_STRUCT_UberAtlasExclusions_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAtlasExclusions_DEFINED) && !defined(IL2CPP_STRUCT_UberAtlasExclusions_FWDDECL)
#include <Modloader/app/structs/UberAtlasExclusions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberAtlasExclusions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
