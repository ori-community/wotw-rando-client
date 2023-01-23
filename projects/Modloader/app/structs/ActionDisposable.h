#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionDisposable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionDisposable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDisposable_DEFINED)
#include <Modloader/app/structs/ActionDisposable__Fields.h>
#if defined(IL2CPP_STRUCT_ActionDisposable__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionDisposable_DEFINED
struct ActionDisposable__Class;
struct ActionDisposable {
    struct ActionDisposable__Class* klass;
    MonitorData* monitor;
    struct ActionDisposable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionDisposable_FWDDECL)
#define IL2CPP_STRUCT_ActionDisposable_FWDDECL
#include <Modloader/app/structs/ActionDisposable__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionDisposable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDisposable_DEFINED) && !defined(IL2CPP_STRUCT_ActionDisposable_FWDDECL)
#include <Modloader/app/structs/ActionDisposable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionDisposable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
