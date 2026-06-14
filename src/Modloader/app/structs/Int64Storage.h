#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int64Storage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int64Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64Storage_DEFINED)
#include <Modloader/app/structs/Int64Storage__Fields.h>
#if defined(IL2CPP_STRUCT_Int64Storage__Fields_DEFINED)
#define IL2CPP_STRUCT_Int64Storage_DEFINED
struct Int64Storage__Class;
struct Int64Storage {
    struct Int64Storage__Class* klass;
    MonitorData* monitor;
    struct Int64Storage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int64Storage_FWDDECL)
#define IL2CPP_STRUCT_Int64Storage_FWDDECL
#include <Modloader/app/structs/Int64Storage__Class.h>
#endif
#undef IL2CPP_STRUCT_Int64Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64Storage_DEFINED) && !defined(IL2CPP_STRUCT_Int64Storage_FWDDECL)
#include <Modloader/app/structs/Int64Storage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int64Storage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
