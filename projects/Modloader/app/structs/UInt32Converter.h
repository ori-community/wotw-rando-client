#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt32Converter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt32Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32Converter_DEFINED)
#define IL2CPP_STRUCT_UInt32Converter_DEFINED
struct UInt32Converter__Class;
struct UInt32Converter {
    struct UInt32Converter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UInt32Converter_FWDDECL)
#define IL2CPP_STRUCT_UInt32Converter_FWDDECL
#include <Modloader/app/structs/UInt32Converter__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt32Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32Converter_DEFINED) && !defined(IL2CPP_STRUCT_UInt32Converter_FWDDECL)
#include <Modloader/app/structs/UInt32Converter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt32Converter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
