#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanConverter_DEFINED)
#define IL2CPP_STRUCT_BooleanConverter_DEFINED
struct BooleanConverter__Class;
struct BooleanConverter {
    struct BooleanConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BooleanConverter_FWDDECL)
#define IL2CPP_STRUCT_BooleanConverter_FWDDECL
#include <Modloader/app/structs/BooleanConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanConverter_DEFINED) && !defined(IL2CPP_STRUCT_BooleanConverter_FWDDECL)
#include <Modloader/app/structs/BooleanConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
