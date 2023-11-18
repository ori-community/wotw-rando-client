#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int16ArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int16ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16ArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/Int16ArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Int16ArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Int16ArrayTypeInfo_DEFINED
struct Int16ArrayTypeInfo__Class;
struct Int16ArrayTypeInfo {
    struct Int16ArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct Int16ArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int16ArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_Int16ArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/Int16ArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Int16ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16ArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_Int16ArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/Int16ArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int16ArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
