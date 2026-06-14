#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int32ArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int32ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int32ArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/Int32ArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Int32ArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Int32ArrayTypeInfo_DEFINED
struct Int32ArrayTypeInfo__Class;
struct Int32ArrayTypeInfo {
    struct Int32ArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct Int32ArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int32ArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_Int32ArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/Int32ArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Int32ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int32ArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_Int32ArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/Int32ArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int32ArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
