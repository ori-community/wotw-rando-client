#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grounding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grounding_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding_DEFINED)
#include <Modloader/app/structs/Grounding__Fields.h>
#if defined(IL2CPP_STRUCT_Grounding__Fields_DEFINED)
#define IL2CPP_STRUCT_Grounding_DEFINED
struct Grounding__Class;
struct Grounding {
    struct Grounding__Class* klass;
    MonitorData* monitor;
    struct Grounding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grounding_FWDDECL)
#define IL2CPP_STRUCT_Grounding_FWDDECL
#include <Modloader/app/structs/Grounding__Class.h>
#endif
#undef IL2CPP_STRUCT_Grounding_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding_DEFINED) && !defined(IL2CPP_STRUCT_Grounding_FWDDECL)
#include <Modloader/app/structs/Grounding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grounding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
