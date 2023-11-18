#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_ElementContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_ElementContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent_DEFINED)
#include <Modloader/app/structs/XdrBuilder_ElementContent__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_ElementContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_ElementContent_DEFINED
struct XdrBuilder_ElementContent__Class;
struct XdrBuilder_ElementContent {
    struct XdrBuilder_ElementContent__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_ElementContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_ElementContent_FWDDECL
#include <Modloader/app/structs/XdrBuilder_ElementContent__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_ElementContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_ElementContent_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_ElementContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_ElementContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
