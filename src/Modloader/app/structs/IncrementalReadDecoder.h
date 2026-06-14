#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IncrementalReadDecoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IncrementalReadDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IncrementalReadDecoder_DEFINED)
#define IL2CPP_STRUCT_IncrementalReadDecoder_DEFINED
struct IncrementalReadDecoder__Class;
struct IncrementalReadDecoder {
    struct IncrementalReadDecoder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IncrementalReadDecoder_FWDDECL)
#define IL2CPP_STRUCT_IncrementalReadDecoder_FWDDECL
#include <Modloader/app/structs/IncrementalReadDecoder__Class.h>
#endif
#undef IL2CPP_STRUCT_IncrementalReadDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IncrementalReadDecoder_DEFINED) && !defined(IL2CPP_STRUCT_IncrementalReadDecoder_FWDDECL)
#include <Modloader/app/structs/IncrementalReadDecoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IncrementalReadDecoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
