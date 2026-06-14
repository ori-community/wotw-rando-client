#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigIntegerCalculator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigIntegerCalculator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigIntegerCalculator_DEFINED)
#define IL2CPP_STRUCT_BigIntegerCalculator_DEFINED
struct BigIntegerCalculator__Class;
struct BigIntegerCalculator {
    struct BigIntegerCalculator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BigIntegerCalculator_FWDDECL)
#define IL2CPP_STRUCT_BigIntegerCalculator_FWDDECL
#include <Modloader/app/structs/BigIntegerCalculator__Class.h>
#endif
#undef IL2CPP_STRUCT_BigIntegerCalculator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigIntegerCalculator_DEFINED) && !defined(IL2CPP_STRUCT_BigIntegerCalculator_FWDDECL)
#include <Modloader/app/structs/BigIntegerCalculator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigIntegerCalculator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
