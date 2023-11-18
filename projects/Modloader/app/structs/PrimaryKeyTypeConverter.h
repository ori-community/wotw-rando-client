#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimaryKeyTypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimaryKeyTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimaryKeyTypeConverter_DEFINED)
#include <Modloader/app/structs/PrimaryKeyTypeConverter__Fields.h>
#if defined(IL2CPP_STRUCT_PrimaryKeyTypeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_PrimaryKeyTypeConverter_DEFINED
struct PrimaryKeyTypeConverter__Class;
struct PrimaryKeyTypeConverter {
    struct PrimaryKeyTypeConverter__Class* klass;
    MonitorData* monitor;
    struct PrimaryKeyTypeConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrimaryKeyTypeConverter_FWDDECL)
#define IL2CPP_STRUCT_PrimaryKeyTypeConverter_FWDDECL
#include <Modloader/app/structs/PrimaryKeyTypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_PrimaryKeyTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimaryKeyTypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_PrimaryKeyTypeConverter_FWDDECL)
#include <Modloader/app/structs/PrimaryKeyTypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimaryKeyTypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
