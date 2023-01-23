#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SByteConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SByteConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteConverter_DEFINED)
#define IL2CPP_STRUCT_SByteConverter_DEFINED
struct SByteConverter__Class;
struct SByteConverter {
    struct SByteConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SByteConverter_FWDDECL)
#define IL2CPP_STRUCT_SByteConverter_FWDDECL
#include <Modloader/app/structs/SByteConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_SByteConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteConverter_DEFINED) && !defined(IL2CPP_STRUCT_SByteConverter_FWDDECL)
#include <Modloader/app/structs/SByteConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SByteConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
