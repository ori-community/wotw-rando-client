#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeConverter_DEFINED)
#define IL2CPP_STRUCT_TypeConverter_DEFINED
struct TypeConverter__Class;
struct TypeConverter {
    struct TypeConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeConverter_FWDDECL)
#define IL2CPP_STRUCT_TypeConverter_FWDDECL
#include <Modloader/app/structs/TypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_TypeConverter_FWDDECL)
#include <Modloader/app/structs/TypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
