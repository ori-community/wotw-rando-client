#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitConverter_DEFINED)
#define IL2CPP_STRUCT_BitConverter_DEFINED
struct BitConverter__Class;
struct BitConverter {
    struct BitConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BitConverter_FWDDECL)
#define IL2CPP_STRUCT_BitConverter_FWDDECL
#include <Modloader/app/structs/BitConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_BitConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitConverter_DEFINED) && !defined(IL2CPP_STRUCT_BitConverter_FWDDECL)
#include <Modloader/app/structs/BitConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
