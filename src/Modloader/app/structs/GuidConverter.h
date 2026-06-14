#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidConverter_DEFINED)
#define IL2CPP_STRUCT_GuidConverter_DEFINED
struct GuidConverter__Class;
struct GuidConverter {
    struct GuidConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GuidConverter_FWDDECL)
#define IL2CPP_STRUCT_GuidConverter_FWDDECL
#include <Modloader/app/structs/GuidConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_GuidConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidConverter_DEFINED) && !defined(IL2CPP_STRUCT_GuidConverter_FWDDECL)
#include <Modloader/app/structs/GuidConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
