#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BytePtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BytePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_BytePtr_DEFINED)
#define IL2CPP_STRUCT_BytePtr_DEFINED
struct BytePtr__Class;
struct BytePtr {
    struct BytePtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BytePtr_FWDDECL)
#define IL2CPP_STRUCT_BytePtr_FWDDECL
#include <Modloader/app/structs/BytePtr__Class.h>
#endif
#undef IL2CPP_STRUCT_BytePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_BytePtr_DEFINED) && !defined(IL2CPP_STRUCT_BytePtr_FWDDECL)
#include <Modloader/app/structs/BytePtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BytePtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
