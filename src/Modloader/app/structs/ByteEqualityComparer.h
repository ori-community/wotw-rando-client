#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteEqualityComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteEqualityComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteEqualityComparer_DEFINED)
#define IL2CPP_STRUCT_ByteEqualityComparer_DEFINED
struct ByteEqualityComparer__Class;
struct ByteEqualityComparer {
    struct ByteEqualityComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ByteEqualityComparer_FWDDECL)
#define IL2CPP_STRUCT_ByteEqualityComparer_FWDDECL
#include <Modloader/app/structs/ByteEqualityComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteEqualityComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteEqualityComparer_DEFINED) && !defined(IL2CPP_STRUCT_ByteEqualityComparer_FWDDECL)
#include <Modloader/app/structs/ByteEqualityComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteEqualityComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
