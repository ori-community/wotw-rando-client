#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioPrewarmOperation_DEFINED)
#include <Modloader/app/structs/AudioPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_AudioPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioPrewarmOperation_DEFINED
struct AudioPrewarmOperation__Class;
struct AudioPrewarmOperation {
    struct AudioPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct AudioPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_AudioPrewarmOperation_FWDDECL
#include <Modloader/app/structs/AudioPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_AudioPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/AudioPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
