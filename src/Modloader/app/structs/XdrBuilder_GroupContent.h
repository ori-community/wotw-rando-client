#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_GroupContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_GroupContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_GroupContent_DEFINED)
#include <Modloader/app/structs/XdrBuilder_GroupContent__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_GroupContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_GroupContent_DEFINED
struct XdrBuilder_GroupContent__Class;
struct XdrBuilder_GroupContent {
    struct XdrBuilder_GroupContent__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_GroupContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_GroupContent_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_GroupContent_FWDDECL
#include <Modloader/app/structs/XdrBuilder_GroupContent__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_GroupContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_GroupContent_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_GroupContent_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_GroupContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_GroupContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
