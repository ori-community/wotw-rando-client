#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomWater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomWater_DEFINED)
#include <Modloader/app/structs/CustomWater__Fields.h>
#if defined(IL2CPP_STRUCT_CustomWater__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomWater_DEFINED
struct CustomWater__Class;
struct CustomWater {
    struct CustomWater__Class* klass;
    MonitorData* monitor;
    struct CustomWater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomWater_FWDDECL)
#define IL2CPP_STRUCT_CustomWater_FWDDECL
#include <Modloader/app/structs/CustomWater__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomWater_DEFINED) && !defined(IL2CPP_STRUCT_CustomWater_FWDDECL)
#include <Modloader/app/structs/CustomWater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomWater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
