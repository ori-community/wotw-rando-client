#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_DEFINED)
#include <Modloader/app/structs/XdrBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_DEFINED
struct XdrBuilder__Class;
struct XdrBuilder {
    struct XdrBuilder__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_FWDDECL
#include <Modloader/app/structs/XdrBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_FWDDECL)
#include <Modloader/app/structs/XdrBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
