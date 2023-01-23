#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeDetectorString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeDetectorString_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDetectorString_DEFINED)
#include <Modloader/app/structs/ChangeDetectorString__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeDetectorString__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeDetectorString_DEFINED
struct ChangeDetectorString__Class;
struct ChangeDetectorString {
    struct ChangeDetectorString__Class* klass;
    MonitorData* monitor;
    struct ChangeDetectorString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeDetectorString_FWDDECL)
#define IL2CPP_STRUCT_ChangeDetectorString_FWDDECL
#include <Modloader/app/structs/ChangeDetectorString__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeDetectorString_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDetectorString_DEFINED) && !defined(IL2CPP_STRUCT_ChangeDetectorString_FWDDECL)
#include <Modloader/app/structs/ChangeDetectorString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeDetectorString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
