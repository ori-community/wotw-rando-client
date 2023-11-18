#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryCompatibility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryCompatibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCompatibility_DEFINED)
#define IL2CPP_STRUCT_BinaryCompatibility_DEFINED
struct BinaryCompatibility__Class;
struct BinaryCompatibility {
    struct BinaryCompatibility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryCompatibility_FWDDECL)
#define IL2CPP_STRUCT_BinaryCompatibility_FWDDECL
#include <Modloader/app/structs/BinaryCompatibility__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryCompatibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCompatibility_DEFINED) && !defined(IL2CPP_STRUCT_BinaryCompatibility_FWDDECL)
#include <Modloader/app/structs/BinaryCompatibility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryCompatibility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
