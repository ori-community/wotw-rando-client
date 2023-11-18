#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KSStruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KSStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_KSStruct_DEFINED)
#include <Modloader/app/structs/KSStruct__Fields.h>
#if defined(IL2CPP_STRUCT_KSStruct__Fields_DEFINED)
#define IL2CPP_STRUCT_KSStruct_DEFINED
struct KSStruct__Class;
struct KSStruct {
    struct KSStruct__Class* klass;
    MonitorData* monitor;
    struct KSStruct__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KSStruct_FWDDECL)
#define IL2CPP_STRUCT_KSStruct_FWDDECL
#include <Modloader/app/structs/KSStruct__Class.h>
#endif
#undef IL2CPP_STRUCT_KSStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_KSStruct_DEFINED) && !defined(IL2CPP_STRUCT_KSStruct_FWDDECL)
#include <Modloader/app/structs/KSStruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KSStruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
