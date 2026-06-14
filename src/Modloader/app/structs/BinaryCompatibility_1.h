#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryCompatibility_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryCompatibility_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCompatibility_1_DEFINED)
#define IL2CPP_STRUCT_BinaryCompatibility_1_DEFINED
struct BinaryCompatibility_1__Class;
struct BinaryCompatibility_1 {
    struct BinaryCompatibility_1__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryCompatibility_1_FWDDECL)
#define IL2CPP_STRUCT_BinaryCompatibility_1_FWDDECL
#include <Modloader/app/structs/BinaryCompatibility_1__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryCompatibility_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCompatibility_1_DEFINED) && !defined(IL2CPP_STRUCT_BinaryCompatibility_1_FWDDECL)
#include <Modloader/app/structs/BinaryCompatibility_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryCompatibility_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
