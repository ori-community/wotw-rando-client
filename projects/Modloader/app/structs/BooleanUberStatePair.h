#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanUberStatePair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanUberStatePair_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanUberStatePair_DEFINED)
#include <Modloader/app/structs/BooleanUberStatePair__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanUberStatePair__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanUberStatePair_DEFINED
struct BooleanUberStatePair__Class;
struct BooleanUberStatePair {
    struct BooleanUberStatePair__Class* klass;
    MonitorData* monitor;
    struct BooleanUberStatePair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanUberStatePair_FWDDECL)
#define IL2CPP_STRUCT_BooleanUberStatePair_FWDDECL
#include <Modloader/app/structs/BooleanUberStatePair__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanUberStatePair_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanUberStatePair_DEFINED) && !defined(IL2CPP_STRUCT_BooleanUberStatePair_FWDDECL)
#include <Modloader/app/structs/BooleanUberStatePair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanUberStatePair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
