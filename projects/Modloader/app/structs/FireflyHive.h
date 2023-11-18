#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireflyHive_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireflyHive_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireflyHive_DEFINED)
#include <Modloader/app/structs/FireflyHive__Fields.h>
#if defined(IL2CPP_STRUCT_FireflyHive__Fields_DEFINED)
#define IL2CPP_STRUCT_FireflyHive_DEFINED
struct FireflyHive__Class;
struct FireflyHive {
    struct FireflyHive__Class* klass;
    MonitorData* monitor;
    struct FireflyHive__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FireflyHive_FWDDECL)
#define IL2CPP_STRUCT_FireflyHive_FWDDECL
#include <Modloader/app/structs/FireflyHive__Class.h>
#endif
#undef IL2CPP_STRUCT_FireflyHive_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireflyHive_DEFINED) && !defined(IL2CPP_STRUCT_FireflyHive_FWDDECL)
#include <Modloader/app/structs/FireflyHive.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireflyHive.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
