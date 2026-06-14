#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZDontSaveGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZDontSaveGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZDontSaveGroup_DEFINED)
#include <Modloader/app/structs/ZDontSaveGroup__Fields.h>
#if defined(IL2CPP_STRUCT_ZDontSaveGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_ZDontSaveGroup_DEFINED
struct ZDontSaveGroup__Class;
struct ZDontSaveGroup {
    struct ZDontSaveGroup__Class* klass;
    MonitorData* monitor;
    struct ZDontSaveGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZDontSaveGroup_FWDDECL)
#define IL2CPP_STRUCT_ZDontSaveGroup_FWDDECL
#include <Modloader/app/structs/ZDontSaveGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_ZDontSaveGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZDontSaveGroup_DEFINED) && !defined(IL2CPP_STRUCT_ZDontSaveGroup_FWDDECL)
#include <Modloader/app/structs/ZDontSaveGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZDontSaveGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
