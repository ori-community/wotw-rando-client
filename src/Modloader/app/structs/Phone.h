#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Phone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Phone_INITIALIZING
#if !defined(IL2CPP_STRUCT_Phone_DEFINED)
#include <Modloader/app/structs/Phone__Fields.h>
#if defined(IL2CPP_STRUCT_Phone__Fields_DEFINED)
#define IL2CPP_STRUCT_Phone_DEFINED
struct Phone__Class;
struct Phone {
    struct Phone__Class* klass;
    MonitorData* monitor;
    struct Phone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Phone_FWDDECL)
#define IL2CPP_STRUCT_Phone_FWDDECL
#include <Modloader/app/structs/Phone__Class.h>
#endif
#undef IL2CPP_STRUCT_Phone_INITIALIZING
#if !defined(IL2CPP_STRUCT_Phone_DEFINED) && !defined(IL2CPP_STRUCT_Phone_FWDDECL)
#include <Modloader/app/structs/Phone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Phone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
