#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExplosionDemo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExplosionDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplosionDemo_DEFINED)
#include <Modloader/app/structs/ExplosionDemo__Fields.h>
#if defined(IL2CPP_STRUCT_ExplosionDemo__Fields_DEFINED)
#define IL2CPP_STRUCT_ExplosionDemo_DEFINED
struct ExplosionDemo__Class;
struct ExplosionDemo {
    struct ExplosionDemo__Class* klass;
    MonitorData* monitor;
    struct ExplosionDemo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExplosionDemo_FWDDECL)
#define IL2CPP_STRUCT_ExplosionDemo_FWDDECL
#include <Modloader/app/structs/ExplosionDemo__Class.h>
#endif
#undef IL2CPP_STRUCT_ExplosionDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplosionDemo_DEFINED) && !defined(IL2CPP_STRUCT_ExplosionDemo_FWDDECL)
#include <Modloader/app/structs/ExplosionDemo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExplosionDemo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
