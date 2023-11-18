#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeBag_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeBag_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeBag_DEFINED)
#include <Modloader/app/structs/SafeBag__Fields.h>
#if defined(IL2CPP_STRUCT_SafeBag__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeBag_DEFINED
struct SafeBag__Class;
struct SafeBag {
    struct SafeBag__Class* klass;
    MonitorData* monitor;
    struct SafeBag__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeBag_FWDDECL)
#define IL2CPP_STRUCT_SafeBag_FWDDECL
#include <Modloader/app/structs/SafeBag__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeBag_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeBag_DEFINED) && !defined(IL2CPP_STRUCT_SafeBag_FWDDECL)
#include <Modloader/app/structs/SafeBag.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeBag.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
