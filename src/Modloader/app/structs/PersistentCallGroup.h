#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistentCallGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistentCallGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentCallGroup_DEFINED)
#include <Modloader/app/structs/PersistentCallGroup__Fields.h>
#if defined(IL2CPP_STRUCT_PersistentCallGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_PersistentCallGroup_DEFINED
struct PersistentCallGroup__Class;
struct PersistentCallGroup {
    struct PersistentCallGroup__Class* klass;
    MonitorData* monitor;
    struct PersistentCallGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PersistentCallGroup_FWDDECL)
#define IL2CPP_STRUCT_PersistentCallGroup_FWDDECL
#include <Modloader/app/structs/PersistentCallGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_PersistentCallGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentCallGroup_DEFINED) && !defined(IL2CPP_STRUCT_PersistentCallGroup_FWDDECL)
#include <Modloader/app/structs/PersistentCallGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistentCallGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
