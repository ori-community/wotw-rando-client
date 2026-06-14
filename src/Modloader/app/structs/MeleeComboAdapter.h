#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboAdapter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboAdapter_DEFINED)
#include <Modloader/app/structs/MeleeComboAdapter__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeComboAdapter__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboAdapter_DEFINED
struct MeleeComboAdapter__Class;
struct MeleeComboAdapter {
    struct MeleeComboAdapter__Class* klass;
    MonitorData* monitor;
    struct MeleeComboAdapter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboAdapter_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboAdapter_FWDDECL
#include <Modloader/app/structs/MeleeComboAdapter__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboAdapter_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboAdapter_FWDDECL)
#include <Modloader/app/structs/MeleeComboAdapter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboAdapter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
