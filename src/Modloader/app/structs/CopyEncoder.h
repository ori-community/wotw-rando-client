#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CopyEncoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CopyEncoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CopyEncoder_DEFINED)
#define IL2CPP_STRUCT_CopyEncoder_DEFINED
struct CopyEncoder__Class;
struct CopyEncoder {
    struct CopyEncoder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CopyEncoder_FWDDECL)
#define IL2CPP_STRUCT_CopyEncoder_FWDDECL
#include <Modloader/app/structs/CopyEncoder__Class.h>
#endif
#undef IL2CPP_STRUCT_CopyEncoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CopyEncoder_DEFINED) && !defined(IL2CPP_STRUCT_CopyEncoder_FWDDECL)
#include <Modloader/app/structs/CopyEncoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CopyEncoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
