#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSerialize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSerialize_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSerialize_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSerialize_DEFINED
struct SaveSerialize__Class;
struct SaveSerialize {
    struct SaveSerialize__Class* klass;
    MonitorData* monitor;
    struct SaveSerialize__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSerialize_FWDDECL)
#define IL2CPP_STRUCT_SaveSerialize_FWDDECL
#include <Modloader/app/structs/SaveSerialize__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSerialize_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSerialize_DEFINED) && !defined(IL2CPP_STRUCT_SaveSerialize_FWDDECL)
#include <Modloader/app/structs/SaveSerialize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSerialize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
