#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICarryable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICarryable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICarryable_DEFINED)
#define IL2CPP_STRUCT_ICarryable_DEFINED
struct ICarryable__Class;
struct ICarryable {
    struct ICarryable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICarryable_FWDDECL)
#define IL2CPP_STRUCT_ICarryable_FWDDECL
#include <Modloader/app/structs/ICarryable__Class.h>
#endif
#undef IL2CPP_STRUCT_ICarryable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICarryable_DEFINED) && !defined(IL2CPP_STRUCT_ICarryable_FWDDECL)
#include <Modloader/app/structs/ICarryable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICarryable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
