#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatPref_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatPref_DEFINED)
#include <Modloader/app/structs/FloatPref__Fields.h>
#if defined(IL2CPP_STRUCT_FloatPref__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatPref_DEFINED
struct FloatPref__Class;
struct FloatPref {
    struct FloatPref__Class* klass;
    MonitorData* monitor;
    struct FloatPref__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatPref_FWDDECL)
#define IL2CPP_STRUCT_FloatPref_FWDDECL
#include <Modloader/app/structs/FloatPref__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatPref_DEFINED) && !defined(IL2CPP_STRUCT_FloatPref_FWDDECL)
#include <Modloader/app/structs/FloatPref.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatPref.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
