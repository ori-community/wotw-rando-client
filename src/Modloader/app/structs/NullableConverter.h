#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NullableConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NullableConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullableConverter_DEFINED)
#include <Modloader/app/structs/NullableConverter__Fields.h>
#if defined(IL2CPP_STRUCT_NullableConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_NullableConverter_DEFINED
struct NullableConverter__Class;
struct NullableConverter {
    struct NullableConverter__Class* klass;
    MonitorData* monitor;
    struct NullableConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NullableConverter_FWDDECL)
#define IL2CPP_STRUCT_NullableConverter_FWDDECL
#include <Modloader/app/structs/NullableConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_NullableConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullableConverter_DEFINED) && !defined(IL2CPP_STRUCT_NullableConverter_FWDDECL)
#include <Modloader/app/structs/NullableConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NullableConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
