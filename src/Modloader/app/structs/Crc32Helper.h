#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Crc32Helper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Crc32Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Crc32Helper_DEFINED)
#define IL2CPP_STRUCT_Crc32Helper_DEFINED
struct Crc32Helper__Class;
struct Crc32Helper {
    struct Crc32Helper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Crc32Helper_FWDDECL)
#define IL2CPP_STRUCT_Crc32Helper_FWDDECL
#include <Modloader/app/structs/Crc32Helper__Class.h>
#endif
#undef IL2CPP_STRUCT_Crc32Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Crc32Helper_DEFINED) && !defined(IL2CPP_STRUCT_Crc32Helper_FWDDECL)
#include <Modloader/app/structs/Crc32Helper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Crc32Helper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
