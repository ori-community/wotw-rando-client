#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LehmerRng_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LehmerRng_INITIALIZING
#if !defined(IL2CPP_STRUCT_LehmerRng_DEFINED)
#include <Modloader/app/structs/LehmerRng__Fields.h>
#if defined(IL2CPP_STRUCT_LehmerRng__Fields_DEFINED)
#define IL2CPP_STRUCT_LehmerRng_DEFINED
struct LehmerRng__Class;
struct LehmerRng {
    struct LehmerRng__Class* klass;
    MonitorData* monitor;
    struct LehmerRng__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LehmerRng_FWDDECL)
#define IL2CPP_STRUCT_LehmerRng_FWDDECL
#include <Modloader/app/structs/LehmerRng__Class.h>
#endif
#undef IL2CPP_STRUCT_LehmerRng_INITIALIZING
#if !defined(IL2CPP_STRUCT_LehmerRng_DEFINED) && !defined(IL2CPP_STRUCT_LehmerRng_FWDDECL)
#include <Modloader/app/structs/LehmerRng.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LehmerRng.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
