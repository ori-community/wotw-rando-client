#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_DEFINED)
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_DEFINED
struct XdrBuilder_XdrAttributeEntry__Class;
struct XdrBuilder_XdrAttributeEntry {
    struct XdrBuilder_XdrAttributeEntry__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_XdrAttributeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_FWDDECL
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
