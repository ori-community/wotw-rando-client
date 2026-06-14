#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecimalConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecimalConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalConverter_DEFINED)
#define IL2CPP_STRUCT_DecimalConverter_DEFINED
struct DecimalConverter__Class;
struct DecimalConverter {
    struct DecimalConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DecimalConverter_FWDDECL)
#define IL2CPP_STRUCT_DecimalConverter_FWDDECL
#include <Modloader/app/structs/DecimalConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DecimalConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalConverter_DEFINED) && !defined(IL2CPP_STRUCT_DecimalConverter_FWDDECL)
#include <Modloader/app/structs/DecimalConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecimalConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
