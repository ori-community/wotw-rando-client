#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_DEFINED)
#include <Modloader/app/structs/XdrBuilder_XdrInitFunction__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_XdrInitFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_DEFINED
struct XdrBuilder_XdrInitFunction__Class;
struct XdrBuilder_XdrInitFunction {
    struct XdrBuilder_XdrInitFunction__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_XdrInitFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_FWDDECL
#include <Modloader/app/structs/XdrBuilder_XdrInitFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_XdrInitFunction_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_XdrInitFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_XdrInitFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
