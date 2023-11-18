#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteStateMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStateMap_DEFINED)
#include <Modloader/app/structs/ByteStateMap__Fields.h>
#if defined(IL2CPP_STRUCT_ByteStateMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteStateMap_DEFINED
struct ByteStateMap__Class;
struct ByteStateMap {
    struct ByteStateMap__Class* klass;
    MonitorData* monitor;
    struct ByteStateMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteStateMap_FWDDECL)
#define IL2CPP_STRUCT_ByteStateMap_FWDDECL
#include <Modloader/app/structs/ByteStateMap__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStateMap_DEFINED) && !defined(IL2CPP_STRUCT_ByteStateMap_FWDDECL)
#include <Modloader/app/structs/ByteStateMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteStateMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
