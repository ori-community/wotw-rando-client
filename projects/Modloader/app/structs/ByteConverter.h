#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteConverter_DEFINED)
#define IL2CPP_STRUCT_ByteConverter_DEFINED
struct ByteConverter__Class;
struct ByteConverter {
    struct ByteConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ByteConverter_FWDDECL)
#define IL2CPP_STRUCT_ByteConverter_FWDDECL
#include <Modloader/app/structs/ByteConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteConverter_DEFINED) && !defined(IL2CPP_STRUCT_ByteConverter_FWDDECL)
#include <Modloader/app/structs/ByteConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
