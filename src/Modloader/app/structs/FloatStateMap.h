#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatStateMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatStateMap_DEFINED)
#include <Modloader/app/structs/FloatStateMap__Fields.h>
#if defined(IL2CPP_STRUCT_FloatStateMap__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatStateMap_DEFINED
struct FloatStateMap__Class;
struct FloatStateMap {
    struct FloatStateMap__Class* klass;
    MonitorData* monitor;
    struct FloatStateMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatStateMap_FWDDECL)
#define IL2CPP_STRUCT_FloatStateMap_FWDDECL
#include <Modloader/app/structs/FloatStateMap__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatStateMap_DEFINED) && !defined(IL2CPP_STRUCT_FloatStateMap_FWDDECL)
#include <Modloader/app/structs/FloatStateMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatStateMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
