#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CRC32_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CRC32_INITIALIZING
#if !defined(IL2CPP_STRUCT_CRC32_DEFINED)
#include <Modloader/app/structs/CRC32__Fields.h>
#if defined(IL2CPP_STRUCT_CRC32__Fields_DEFINED)
#define IL2CPP_STRUCT_CRC32_DEFINED
struct CRC32__Class;
struct CRC32 {
    struct CRC32__Class* klass;
    MonitorData* monitor;
    struct CRC32__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CRC32_FWDDECL)
#define IL2CPP_STRUCT_CRC32_FWDDECL
#include <Modloader/app/structs/CRC32__Class.h>
#endif
#undef IL2CPP_STRUCT_CRC32_INITIALIZING
#if !defined(IL2CPP_STRUCT_CRC32_DEFINED) && !defined(IL2CPP_STRUCT_CRC32_FWDDECL)
#include <Modloader/app/structs/CRC32.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CRC32.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
