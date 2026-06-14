#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AOTDummy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AOTDummy_INITIALIZING
#if !defined(IL2CPP_STRUCT_AOTDummy_DEFINED)
#include <Modloader/app/structs/AOTDummy__Fields.h>
#if defined(IL2CPP_STRUCT_AOTDummy__Fields_DEFINED)
#define IL2CPP_STRUCT_AOTDummy_DEFINED
struct AOTDummy__Class;
struct AOTDummy {
    struct AOTDummy__Class* klass;
    MonitorData* monitor;
    struct AOTDummy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AOTDummy_FWDDECL)
#define IL2CPP_STRUCT_AOTDummy_FWDDECL
#include <Modloader/app/structs/AOTDummy__Class.h>
#endif
#undef IL2CPP_STRUCT_AOTDummy_INITIALIZING
#if !defined(IL2CPP_STRUCT_AOTDummy_DEFINED) && !defined(IL2CPP_STRUCT_AOTDummy_FWDDECL)
#include <Modloader/app/structs/AOTDummy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AOTDummy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
