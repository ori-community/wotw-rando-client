#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeDetectorFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeDetectorFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDetectorFloat_DEFINED)
#include <Modloader/app/structs/ChangeDetectorFloat__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeDetectorFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeDetectorFloat_DEFINED
struct ChangeDetectorFloat__Class;
struct ChangeDetectorFloat {
    struct ChangeDetectorFloat__Class* klass;
    MonitorData* monitor;
    struct ChangeDetectorFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeDetectorFloat_FWDDECL)
#define IL2CPP_STRUCT_ChangeDetectorFloat_FWDDECL
#include <Modloader/app/structs/ChangeDetectorFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeDetectorFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDetectorFloat_DEFINED) && !defined(IL2CPP_STRUCT_ChangeDetectorFloat_FWDDECL)
#include <Modloader/app/structs/ChangeDetectorFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeDetectorFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
