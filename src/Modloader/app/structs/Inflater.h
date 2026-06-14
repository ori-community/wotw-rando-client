#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inflater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inflater_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inflater_DEFINED)
#include <Modloader/app/structs/Inflater__Fields.h>
#if defined(IL2CPP_STRUCT_Inflater__Fields_DEFINED)
#define IL2CPP_STRUCT_Inflater_DEFINED
struct Inflater__Class;
struct Inflater {
    struct Inflater__Class* klass;
    MonitorData* monitor;
    struct Inflater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Inflater_FWDDECL)
#define IL2CPP_STRUCT_Inflater_FWDDECL
#include <Modloader/app/structs/Inflater__Class.h>
#endif
#undef IL2CPP_STRUCT_Inflater_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inflater_DEFINED) && !defined(IL2CPP_STRUCT_Inflater_FWDDECL)
#include <Modloader/app/structs/Inflater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inflater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
