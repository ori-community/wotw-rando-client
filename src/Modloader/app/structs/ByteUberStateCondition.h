#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteUberStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteUberStateCondition_DEFINED)
#include <Modloader/app/structs/ByteUberStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ByteUberStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteUberStateCondition_DEFINED
struct ByteUberStateCondition__Class;
struct ByteUberStateCondition {
    struct ByteUberStateCondition__Class* klass;
    MonitorData* monitor;
    struct ByteUberStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteUberStateCondition_FWDDECL)
#define IL2CPP_STRUCT_ByteUberStateCondition_FWDDECL
#include <Modloader/app/structs/ByteUberStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteUberStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_ByteUberStateCondition_FWDDECL)
#include <Modloader/app/structs/ByteUberStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteUberStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
