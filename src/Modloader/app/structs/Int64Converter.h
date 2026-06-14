#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int64Converter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int64Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64Converter_DEFINED)
#define IL2CPP_STRUCT_Int64Converter_DEFINED
struct Int64Converter__Class;
struct Int64Converter {
    struct Int64Converter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Int64Converter_FWDDECL)
#define IL2CPP_STRUCT_Int64Converter_FWDDECL
#include <Modloader/app/structs/Int64Converter__Class.h>
#endif
#undef IL2CPP_STRUCT_Int64Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64Converter_DEFINED) && !defined(IL2CPP_STRUCT_Int64Converter_FWDDECL)
#include <Modloader/app/structs/Int64Converter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int64Converter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
