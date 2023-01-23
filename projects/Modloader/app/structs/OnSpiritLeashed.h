#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnSpiritLeashed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnSpiritLeashed_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSpiritLeashed_DEFINED)
#include <Modloader/app/structs/OnSpiritLeashed__Fields.h>
#if defined(IL2CPP_STRUCT_OnSpiritLeashed__Fields_DEFINED)
#define IL2CPP_STRUCT_OnSpiritLeashed_DEFINED
struct OnSpiritLeashed__Class;
struct OnSpiritLeashed {
    struct OnSpiritLeashed__Class* klass;
    MonitorData* monitor;
    struct OnSpiritLeashed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnSpiritLeashed_FWDDECL)
#define IL2CPP_STRUCT_OnSpiritLeashed_FWDDECL
#include <Modloader/app/structs/OnSpiritLeashed__Class.h>
#endif
#undef IL2CPP_STRUCT_OnSpiritLeashed_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSpiritLeashed_DEFINED) && !defined(IL2CPP_STRUCT_OnSpiritLeashed_FWDDECL)
#include <Modloader/app/structs/OnSpiritLeashed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnSpiritLeashed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
