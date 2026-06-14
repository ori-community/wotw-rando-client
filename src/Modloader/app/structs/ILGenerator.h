#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILGenerator_DEFINED)
#define IL2CPP_STRUCT_ILGenerator_DEFINED
struct ILGenerator__Class;
struct ILGenerator {
    struct ILGenerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILGenerator_FWDDECL)
#define IL2CPP_STRUCT_ILGenerator_FWDDECL
#include <Modloader/app/structs/ILGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ILGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILGenerator_DEFINED) && !defined(IL2CPP_STRUCT_ILGenerator_FWDDECL)
#include <Modloader/app/structs/ILGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
