#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedRandom_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedRandom_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRandom_DEFINED)
#define IL2CPP_STRUCT_FixedRandom_DEFINED
struct FixedRandom__Class;
struct FixedRandom {
    struct FixedRandom__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FixedRandom_FWDDECL)
#define IL2CPP_STRUCT_FixedRandom_FWDDECL
#include <Modloader/app/structs/FixedRandom__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedRandom_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRandom_DEFINED) && !defined(IL2CPP_STRUCT_FixedRandom_FWDDECL)
#include <Modloader/app/structs/FixedRandom.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedRandom.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
