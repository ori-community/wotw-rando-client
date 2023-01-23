#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSwimming_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSwimming_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimming_DEFINED)
#include <Modloader/app/structs/SeinSwimming__Fields.h>
#if defined(IL2CPP_STRUCT_SeinSwimming__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSwimming_DEFINED
struct SeinSwimming__Class;
struct SeinSwimming {
    struct SeinSwimming__Class* klass;
    MonitorData* monitor;
    struct SeinSwimming__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSwimming_FWDDECL)
#define IL2CPP_STRUCT_SeinSwimming_FWDDECL
#include <Modloader/app/structs/SeinSwimming__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinSwimming_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimming_DEFINED) && !defined(IL2CPP_STRUCT_SeinSwimming_FWDDECL)
#include <Modloader/app/structs/SeinSwimming.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSwimming.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
