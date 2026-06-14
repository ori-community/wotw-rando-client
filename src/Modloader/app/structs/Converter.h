#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Converter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Converter_DEFINED)
#define IL2CPP_STRUCT_Converter_DEFINED
struct Converter__Class;
struct Converter {
    struct Converter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Converter_FWDDECL)
#define IL2CPP_STRUCT_Converter_FWDDECL
#include <Modloader/app/structs/Converter__Class.h>
#endif
#undef IL2CPP_STRUCT_Converter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Converter_DEFINED) && !defined(IL2CPP_STRUCT_Converter_FWDDECL)
#include <Modloader/app/structs/Converter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Converter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
