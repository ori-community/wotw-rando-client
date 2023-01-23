#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_XdrEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_XdrEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry_DEFINED)
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_XdrEntry_DEFINED
struct XdrBuilder_XdrEntry__Class;
struct XdrBuilder_XdrEntry {
    struct XdrBuilder_XdrEntry__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_XdrEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_XdrEntry_FWDDECL
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_XdrEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_XdrEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_XdrEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
