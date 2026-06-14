#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLever_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLever_DEFINED)
#include <Modloader/app/structs/SeinLever__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLever__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLever_DEFINED
struct SeinLever__Class;
struct SeinLever {
    struct SeinLever__Class* klass;
    MonitorData* monitor;
    struct SeinLever__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLever_FWDDECL)
#define IL2CPP_STRUCT_SeinLever_FWDDECL
#include <Modloader/app/structs/SeinLever__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLever_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLever_DEFINED) && !defined(IL2CPP_STRUCT_SeinLever_FWDDECL)
#include <Modloader/app/structs/SeinLever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
