#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodingHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodingHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingHelper_DEFINED)
#define IL2CPP_STRUCT_EncodingHelper_DEFINED
struct EncodingHelper__Class;
struct EncodingHelper {
    struct EncodingHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodingHelper_FWDDECL)
#define IL2CPP_STRUCT_EncodingHelper_FWDDECL
#include <Modloader/app/structs/EncodingHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_EncodingHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingHelper_DEFINED) && !defined(IL2CPP_STRUCT_EncodingHelper_FWDDECL)
#include <Modloader/app/structs/EncodingHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodingHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
