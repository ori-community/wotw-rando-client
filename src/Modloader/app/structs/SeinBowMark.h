#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowMark_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowMark_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowMark_DEFINED)
#include <Modloader/app/structs/SeinBowMark__Fields.h>
#if defined(IL2CPP_STRUCT_SeinBowMark__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBowMark_DEFINED
struct SeinBowMark__Class;
struct SeinBowMark {
    struct SeinBowMark__Class* klass;
    MonitorData* monitor;
    struct SeinBowMark__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBowMark_FWDDECL)
#define IL2CPP_STRUCT_SeinBowMark_FWDDECL
#include <Modloader/app/structs/SeinBowMark__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinBowMark_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowMark_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowMark_FWDDECL)
#include <Modloader/app/structs/SeinBowMark.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowMark.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
