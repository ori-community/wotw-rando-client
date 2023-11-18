#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Data_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_Data_DEFINED)
#include <Modloader/app/structs/Data__Fields.h>
#if defined(IL2CPP_STRUCT_Data__Fields_DEFINED)
#define IL2CPP_STRUCT_Data_DEFINED
struct Data__Class;
struct Data {
    struct Data__Class* klass;
    MonitorData* monitor;
    struct Data__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Data_FWDDECL)
#define IL2CPP_STRUCT_Data_FWDDECL
#include <Modloader/app/structs/Data__Class.h>
#endif
#undef IL2CPP_STRUCT_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_Data_DEFINED) && !defined(IL2CPP_STRUCT_Data_FWDDECL)
#include <Modloader/app/structs/Data.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Data.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
