#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingleConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingleConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleConverter_DEFINED)
#define IL2CPP_STRUCT_SingleConverter_DEFINED
struct SingleConverter__Class;
struct SingleConverter {
    struct SingleConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SingleConverter_FWDDECL)
#define IL2CPP_STRUCT_SingleConverter_FWDDECL
#include <Modloader/app/structs/SingleConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_SingleConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleConverter_DEFINED) && !defined(IL2CPP_STRUCT_SingleConverter_FWDDECL)
#include <Modloader/app/structs/SingleConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingleConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
