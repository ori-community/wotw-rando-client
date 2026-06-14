#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodedStreamFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodedStreamFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodedStreamFactory_DEFINED)
#define IL2CPP_STRUCT_EncodedStreamFactory_DEFINED
struct EncodedStreamFactory__Class;
struct EncodedStreamFactory {
    struct EncodedStreamFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodedStreamFactory_FWDDECL)
#define IL2CPP_STRUCT_EncodedStreamFactory_FWDDECL
#include <Modloader/app/structs/EncodedStreamFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_EncodedStreamFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodedStreamFactory_DEFINED) && !defined(IL2CPP_STRUCT_EncodedStreamFactory_FWDDECL)
#include <Modloader/app/structs/EncodedStreamFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodedStreamFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
