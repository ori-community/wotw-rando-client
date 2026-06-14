#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int16Storage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int16Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16Storage_DEFINED)
#include <Modloader/app/structs/Int16Storage__Fields.h>
#if defined(IL2CPP_STRUCT_Int16Storage__Fields_DEFINED)
#define IL2CPP_STRUCT_Int16Storage_DEFINED
struct Int16Storage__Class;
struct Int16Storage {
    struct Int16Storage__Class* klass;
    MonitorData* monitor;
    struct Int16Storage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int16Storage_FWDDECL)
#define IL2CPP_STRUCT_Int16Storage_FWDDECL
#include <Modloader/app/structs/Int16Storage__Class.h>
#endif
#undef IL2CPP_STRUCT_Int16Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16Storage_DEFINED) && !defined(IL2CPP_STRUCT_Int16Storage_FWDDECL)
#include <Modloader/app/structs/Int16Storage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int16Storage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
