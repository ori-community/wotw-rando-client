#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseNumberConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseNumberConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseNumberConverter_DEFINED)
#define IL2CPP_STRUCT_BaseNumberConverter_DEFINED
struct BaseNumberConverter__Class;
struct BaseNumberConverter {
    struct BaseNumberConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseNumberConverter_FWDDECL)
#define IL2CPP_STRUCT_BaseNumberConverter_FWDDECL
#include <Modloader/app/structs/BaseNumberConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseNumberConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseNumberConverter_DEFINED) && !defined(IL2CPP_STRUCT_BaseNumberConverter_FWDDECL)
#include <Modloader/app/structs/BaseNumberConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseNumberConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
