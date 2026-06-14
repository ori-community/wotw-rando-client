#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDeathCounter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDeathCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDeathCounter_DEFINED)
#include <Modloader/app/structs/SeinDeathCounter__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDeathCounter__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDeathCounter_DEFINED
struct SeinDeathCounter__Class;
struct SeinDeathCounter {
    struct SeinDeathCounter__Class* klass;
    MonitorData* monitor;
    struct SeinDeathCounter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDeathCounter_FWDDECL)
#define IL2CPP_STRUCT_SeinDeathCounter_FWDDECL
#include <Modloader/app/structs/SeinDeathCounter__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDeathCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDeathCounter_DEFINED) && !defined(IL2CPP_STRUCT_SeinDeathCounter_FWDDECL)
#include <Modloader/app/structs/SeinDeathCounter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDeathCounter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
