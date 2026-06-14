#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObjectConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObjectConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObjectConverter_DEFINED)
#define IL2CPP_STRUCT_ExpandoObjectConverter_DEFINED
struct ExpandoObjectConverter__Class;
struct ExpandoObjectConverter {
    struct ExpandoObjectConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObjectConverter_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObjectConverter_FWDDECL
#include <Modloader/app/structs/ExpandoObjectConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObjectConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObjectConverter_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObjectConverter_FWDDECL)
#include <Modloader/app/structs/ExpandoObjectConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObjectConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
