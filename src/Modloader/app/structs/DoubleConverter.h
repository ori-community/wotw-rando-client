#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleConverter_DEFINED)
#define IL2CPP_STRUCT_DoubleConverter_DEFINED
struct DoubleConverter__Class;
struct DoubleConverter {
    struct DoubleConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DoubleConverter_FWDDECL)
#define IL2CPP_STRUCT_DoubleConverter_FWDDECL
#include <Modloader/app/structs/DoubleConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DoubleConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleConverter_DEFINED) && !defined(IL2CPP_STRUCT_DoubleConverter_FWDDECL)
#include <Modloader/app/structs/DoubleConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
