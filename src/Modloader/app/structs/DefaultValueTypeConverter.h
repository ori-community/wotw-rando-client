#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultValueTypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultValueTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultValueTypeConverter_DEFINED)
#define IL2CPP_STRUCT_DefaultValueTypeConverter_DEFINED
struct DefaultValueTypeConverter__Class;
struct DefaultValueTypeConverter {
    struct DefaultValueTypeConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultValueTypeConverter_FWDDECL)
#define IL2CPP_STRUCT_DefaultValueTypeConverter_FWDDECL
#include <Modloader/app/structs/DefaultValueTypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultValueTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultValueTypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_DefaultValueTypeConverter_FWDDECL)
#include <Modloader/app/structs/DefaultValueTypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultValueTypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
