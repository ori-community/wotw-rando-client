#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt64Converter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt64Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64Converter_DEFINED)
#define IL2CPP_STRUCT_UInt64Converter_DEFINED
struct UInt64Converter__Class;
struct UInt64Converter {
    struct UInt64Converter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UInt64Converter_FWDDECL)
#define IL2CPP_STRUCT_UInt64Converter_FWDDECL
#include <Modloader/app/structs/UInt64Converter__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt64Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64Converter_DEFINED) && !defined(IL2CPP_STRUCT_UInt64Converter_FWDDECL)
#include <Modloader/app/structs/UInt64Converter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt64Converter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
