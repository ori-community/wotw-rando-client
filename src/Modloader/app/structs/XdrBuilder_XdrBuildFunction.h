#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_DEFINED)
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_DEFINED
struct XdrBuilder_XdrBuildFunction__Class;
struct XdrBuilder_XdrBuildFunction {
    struct XdrBuilder_XdrBuildFunction__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_XdrBuildFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_FWDDECL
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_XdrBuildFunction_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
