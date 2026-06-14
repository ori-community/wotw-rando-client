#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int64TypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int64TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64TypeInfo_DEFINED)
#include <Modloader/app/structs/Int64TypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Int64TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Int64TypeInfo_DEFINED
struct Int64TypeInfo__Class;
struct Int64TypeInfo {
    struct Int64TypeInfo__Class* klass;
    MonitorData* monitor;
    struct Int64TypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int64TypeInfo_FWDDECL)
#define IL2CPP_STRUCT_Int64TypeInfo_FWDDECL
#include <Modloader/app/structs/Int64TypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Int64TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64TypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_Int64TypeInfo_FWDDECL)
#include <Modloader/app/structs/Int64TypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int64TypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
