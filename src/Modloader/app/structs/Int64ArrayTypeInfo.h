#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int64ArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int64ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64ArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/Int64ArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Int64ArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Int64ArrayTypeInfo_DEFINED
struct Int64ArrayTypeInfo__Class;
struct Int64ArrayTypeInfo {
    struct Int64ArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct Int64ArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int64ArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_Int64ArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/Int64ArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Int64ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64ArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_Int64ArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/Int64ArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int64ArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
