#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bits_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bits_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bits_DEFINED)
#define IL2CPP_STRUCT_Bits_DEFINED
struct Bits__Class;
struct Bits {
    struct Bits__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Bits_FWDDECL)
#define IL2CPP_STRUCT_Bits_FWDDECL
#include <Modloader/app/structs/Bits__Class.h>
#endif
#undef IL2CPP_STRUCT_Bits_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bits_DEFINED) && !defined(IL2CPP_STRUCT_Bits_FWDDECL)
#include <Modloader/app/structs/Bits.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bits.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
