#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_STCDemo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_STCDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_STCDemo_DEFINED)
#include <Modloader/app/structs/STCDemo__Fields.h>
#if defined(IL2CPP_STRUCT_STCDemo__Fields_DEFINED)
#define IL2CPP_STRUCT_STCDemo_DEFINED
struct STCDemo__Class;
struct STCDemo {
    struct STCDemo__Class* klass;
    MonitorData* monitor;
    struct STCDemo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_STCDemo_FWDDECL)
#define IL2CPP_STRUCT_STCDemo_FWDDECL
#include <Modloader/app/structs/STCDemo__Class.h>
#endif
#undef IL2CPP_STRUCT_STCDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_STCDemo_DEFINED) && !defined(IL2CPP_STRUCT_STCDemo_FWDDECL)
#include <Modloader/app/structs/STCDemo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/STCDemo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
