#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Twirl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Twirl_INITIALIZING
#if !defined(IL2CPP_STRUCT_Twirl_DEFINED)
#include <Modloader/app/structs/Twirl__Fields.h>
#if defined(IL2CPP_STRUCT_Twirl__Fields_DEFINED)
#define IL2CPP_STRUCT_Twirl_DEFINED
struct Twirl__Class;
struct Twirl {
    struct Twirl__Class* klass;
    MonitorData* monitor;
    struct Twirl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Twirl_FWDDECL)
#define IL2CPP_STRUCT_Twirl_FWDDECL
#include <Modloader/app/structs/Twirl__Class.h>
#endif
#undef IL2CPP_STRUCT_Twirl_INITIALIZING
#if !defined(IL2CPP_STRUCT_Twirl_DEFINED) && !defined(IL2CPP_STRUCT_Twirl_FWDDECL)
#include <Modloader/app/structs/Twirl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Twirl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
